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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_INTERNAL_METADATA_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_INTERNAL_METADATA_TRACING_STUB_H

#include "google/cloud/dataplex/internal/metadata_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dataplex_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class MetadataServiceTracingStub : public MetadataServiceStub {
 public:
  ~MetadataServiceTracingStub() override = default;

  explicit MetadataServiceTracingStub(
      std::shared_ptr<MetadataServiceStub> child);

  StatusOr<google::cloud::dataplex::v1::Entity> CreateEntity(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::CreateEntityRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entity> UpdateEntity(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::UpdateEntityRequest const& request) override;

  Status DeleteEntity(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::DeleteEntityRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entity> GetEntity(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetEntityRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListEntitiesResponse> ListEntities(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListEntitiesRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Partition> CreatePartition(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::CreatePartitionRequest const& request)
      override;

  Status DeletePartition(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::DeletePartitionRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::Partition> GetPartition(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetPartitionRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListPartitionsResponse> ListPartitions(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListPartitionsRequest const& request)
      override;

 private:
  std::shared_ptr<MetadataServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<MetadataServiceStub> MakeMetadataServiceTracingStub(
    std::shared_ptr<MetadataServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_INTERNAL_METADATA_TRACING_STUB_H
