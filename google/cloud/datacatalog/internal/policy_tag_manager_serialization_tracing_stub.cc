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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#include "google/cloud/datacatalog/internal/policy_tag_manager_serialization_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace datacatalog_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PolicyTagManagerSerializationTracingStub::
    PolicyTagManagerSerializationTracingStub(
        std::shared_ptr<PolicyTagManagerSerializationStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::datacatalog::v1::Taxonomy>
PolicyTagManagerSerializationTracingStub::ReplaceTaxonomy(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "ReplaceTaxonomy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ReplaceTaxonomy(context, request));
}

StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
PolicyTagManagerSerializationTracingStub::ImportTaxonomies(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "ImportTaxonomies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ImportTaxonomies(context, request));
}

StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
PolicyTagManagerSerializationTracingStub::ExportTaxonomies(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.datacatalog.v1.PolicyTagManagerSerialization",
      "ExportTaxonomies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ExportTaxonomies(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<PolicyTagManagerSerializationStub>
MakePolicyTagManagerSerializationTracingStub(
    std::shared_ptr<PolicyTagManagerSerializationStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<PolicyTagManagerSerializationTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_internal
}  // namespace cloud
}  // namespace google
