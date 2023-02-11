// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/internal/tracing_stub_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/predicate_utils.h"

namespace google {
namespace cloud {
namespace generator_internal {

TracingStubGenerator::TracingStubGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : StubGeneratorBase("tracing_stub_header_path", "tracing_stub_cc_path",
                        service_descriptor, std::move(service_vars),
                        std::move(service_method_vars), context) {}

Status TracingStubGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(
      R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

#ifndef $header_include_guard$
#define $header_include_guard$
)""");

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({vars("stub_header_path"), "google/cloud/options.h",
                       "google/cloud/version.h"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // Tracing stub class definition
  HeaderPrint(
      R"""(
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class $tracing_stub_class_name$ : public $stub_class_name$ {
 public:
  ~$tracing_stub_class_name$() override = default;

  explicit $tracing_stub_class_name$(std::shared_ptr<$stub_class_name$> child);
)""");

  HeaderPrintPublicMethods();

  HeaderPrint(R"""(
 private:
  std::shared_ptr<$stub_class_name$> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<$stub_class_name$> Make$tracing_stub_class_name$(
    std::shared_ptr<$stub_class_name$> stub);
)""");

  HeaderCloseNamespaces();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status TracingStubGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(
      R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$
)""");

  // includes
  CcPrint("\n");
  CcLocalIncludes({vars("tracing_stub_header_path"),
                   "google/cloud/internal/grpc_opentelemetry.h"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // constructor
  CcPrint(
      R"""(
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

$tracing_stub_class_name$::$tracing_stub_class_name$(
    std::shared_ptr<$stub_class_name$> child)
    : child_(std::move(child)) {}
)""");

  // Tracing stub class member methods
  for (auto const& method : methods()) {
    if (IsStreamingWrite(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    $request_type$,
    $response_type$>>
$tracing_stub_class_name$::$method_name$(
    std::unique_ptr<grpc::ClientContext> context) {
  return child_->$method_name$(std::move(context));
}
)""");
      continue;
    }
    if (IsBidirStreaming(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    $request_type$,
    $response_type$>>
$tracing_stub_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context) {
  return child_->Async$method_name$(cq, std::move(context));
}
)""");
      continue;
    }
    CcPrintMethod(
        method,
        {MethodPattern({{IsResponseTypeEmpty,
                         R"""(
Status $tracing_stub_class_name$::$method_name$()""",
                         R"""(
StatusOr<$response_type$> $tracing_stub_class_name$::$method_name$()"""},
                        {R"""(
    grpc::ClientContext& context,
    $request_type$ const& request) {
  auto span = internal::MakeSpanGrpc("$grpc_service$", "$method_name$");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->$method_name$(context, request));
}
)"""}},
                       And(IsNonStreaming, Not(IsLongrunningOperation))),
         MethodPattern({{R"""(
future<StatusOr<google::longrunning::Operation>>
$tracing_stub_class_name$::Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      $request_type$ const& request) {
  return child_->Async$method_name$(cq, std::move(context), request);
}
)"""}},
                       IsLongrunningOperation),
         MethodPattern({{R"""(
std::unique_ptr<google::cloud::internal::StreamingReadRpc<$response_type$>>
$tracing_stub_class_name$::$method_name$(
   std::unique_ptr<grpc::ClientContext> context,
   $request_type$ const& request) {
  return child_->$method_name$(std::move(context), request);
}
)"""}},
                       IsStreamingRead)},
        __FILE__, __LINE__);
  }

  for (auto const& method : async_methods()) {
    if (IsStreamingRead(method)) {
      auto constexpr kDefinition = R"""(
std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    $response_type$>>
$tracing_stub_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
  return child_->Async$method_name$(cq, std::move(context), request);
}
)""";
      CcPrintMethod(method, __FILE__, __LINE__, kDefinition);
      continue;
    }
    if (IsStreamingWrite(method)) {
      auto constexpr kDefinition = R"""(
std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    $request_type$, $response_type$>>
$tracing_stub_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context) {
  return child_->Async$method_name$(cq, std::move(context));
}
)""";
      CcPrintMethod(method, __FILE__, __LINE__, kDefinition);
      continue;
    }
    CcPrintMethod(
        method,
        {MethodPattern({{IsResponseTypeEmpty,
                         R"""(
future<Status> $tracing_stub_class_name$::Async$method_name$()""",
                         R"""(
future<StatusOr<$response_type$>> $tracing_stub_class_name$::Async$method_name$()"""},
                        {
                            R"""(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      $request_type$ const& request) {
  return child_->Async$method_name$(cq, std::move(context), request);
}
)"""}},
                       And(IsNonStreaming, Not(IsLongrunningOperation)))},
        __FILE__, __LINE__);
  }

  // long running operation support methods
  if (HasLongrunningMethod()) {
    CcPrint(R"""(
future<StatusOr<google::longrunning::Operation>>
$tracing_stub_class_name$::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> $tracing_stub_class_name$::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}
)""");
  }

  CcPrint(R"""(
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<$stub_class_name$> Make$tracing_stub_class_name$(
    std::shared_ptr<$stub_class_name$> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<$tracing_stub_class_name$>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}
)""");
  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
