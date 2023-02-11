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
// source: google/cloud/dataplex/v1/metadata.proto

#include "google/cloud/dataplex/internal/metadata_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dataplex_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MetadataServiceTracingStub::MetadataServiceTracingStub(
    std::shared_ptr<MetadataServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dataplex::v1::Entity>
MetadataServiceTracingStub::CreateEntity(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::CreateEntityRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "CreateEntity");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateEntity(context, request));
}

StatusOr<google::cloud::dataplex::v1::Entity>
MetadataServiceTracingStub::UpdateEntity(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::UpdateEntityRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "UpdateEntity");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateEntity(context, request));
}

Status MetadataServiceTracingStub::DeleteEntity(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::DeleteEntityRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "DeleteEntity");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteEntity(context, request));
}

StatusOr<google::cloud::dataplex::v1::Entity>
MetadataServiceTracingStub::GetEntity(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetEntityRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "GetEntity");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetEntity(context, request));
}

StatusOr<google::cloud::dataplex::v1::ListEntitiesResponse>
MetadataServiceTracingStub::ListEntities(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListEntitiesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "ListEntities");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListEntities(context, request));
}

StatusOr<google::cloud::dataplex::v1::Partition>
MetadataServiceTracingStub::CreatePartition(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::CreatePartitionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "CreatePartition");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreatePartition(context, request));
}

Status MetadataServiceTracingStub::DeletePartition(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::DeletePartitionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "DeletePartition");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeletePartition(context, request));
}

StatusOr<google::cloud::dataplex::v1::Partition>
MetadataServiceTracingStub::GetPartition(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetPartitionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "GetPartition");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetPartition(context, request));
}

StatusOr<google::cloud::dataplex::v1::ListPartitionsResponse>
MetadataServiceTracingStub::ListPartitions(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListPartitionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dataplex.v1.MetadataService",
                                     "ListPartitions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListPartitions(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<MetadataServiceStub> MakeMetadataServiceTracingStub(
    std::shared_ptr<MetadataServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<MetadataServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_internal
}  // namespace cloud
}  // namespace google
