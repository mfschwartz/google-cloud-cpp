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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/tpu/v2/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_TRACING_STUB_H

#include "google/cloud/tpu/v2/internal/tpu_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace tpu_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TpuTracingStub : public TpuStub {
 public:
  ~TpuTracingStub() override = default;

  explicit TpuTracingStub(std::shared_ptr<TpuStub> child);

  StatusOr<google::cloud::tpu::v2::ListNodesResponse> ListNodes(
      grpc::ClientContext& context,
      google::cloud::tpu::v2::ListNodesRequest const& request) override;

  StatusOr<google::cloud::tpu::v2::Node> GetNode(
      grpc::ClientContext& context,
      google::cloud::tpu::v2::GetNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateNode(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::tpu::v2::CreateNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNode(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::tpu::v2::DeleteNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopNode(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::tpu::v2::StopNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartNode(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::tpu::v2::StartNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateNode(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::tpu::v2::UpdateNodeRequest const& request) override;

  StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
  GenerateServiceIdentity(
      grpc::ClientContext& context,
      google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v2::ListAcceleratorTypesResponse>
  ListAcceleratorTypes(
      grpc::ClientContext& context,
      google::cloud::tpu::v2::ListAcceleratorTypesRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v2::AcceleratorType> GetAcceleratorType(
      grpc::ClientContext& context,
      google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v2::ListRuntimeVersionsResponse>
  ListRuntimeVersions(grpc::ClientContext& context,
                      google::cloud::tpu::v2::ListRuntimeVersionsRequest const&
                          request) override;

  StatusOr<google::cloud::tpu::v2::RuntimeVersion> GetRuntimeVersion(
      grpc::ClientContext& context,
      google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) override;

  StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
  GetGuestAttributes(grpc::ClientContext& context,
                     google::cloud::tpu::v2::GetGuestAttributesRequest const&
                         request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<TpuStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<TpuStub> MakeTpuTracingStub(std::shared_ptr<TpuStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_TRACING_STUB_H
