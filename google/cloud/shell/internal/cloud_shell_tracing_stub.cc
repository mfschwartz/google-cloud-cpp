// Copyright 2022 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/shell/v1/cloudshell.proto

#include "google/cloud/shell/internal/cloud_shell_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace shell_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudShellServiceTracingStub::CloudShellServiceTracingStub(
    std::shared_ptr<CloudShellServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::shell::v1::Environment>
CloudShellServiceTracingStub::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::shell::v1::GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.shell.v1.CloudShellService",
                                     "GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetEnvironment(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceTracingStub::AsyncStartEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::shell::v1::StartEnvironmentRequest const& request) {
  return child_->AsyncStartEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceTracingStub::AsyncAuthorizeEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request) {
  return child_->AsyncAuthorizeEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceTracingStub::AsyncAddPublicKey(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::shell::v1::AddPublicKeyRequest const& request) {
  return child_->AsyncAddPublicKey(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceTracingStub::AsyncRemovePublicKey(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::shell::v1::RemovePublicKeyRequest const& request) {
  return child_->AsyncRemovePublicKey(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudShellServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudShellServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CloudShellServiceStub> MakeCloudShellServiceTracingStub(
    std::shared_ptr<CloudShellServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudShellServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_internal
}  // namespace cloud
}  // namespace google
