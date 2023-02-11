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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_INTERNAL_BARE_METAL_SOLUTION_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_INTERNAL_BARE_METAL_SOLUTION_TRACING_STUB_H

#include "google/cloud/baremetalsolution/internal/bare_metal_solution_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace baremetalsolution_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class BareMetalSolutionTracingStub : public BareMetalSolutionStub {
 public:
  ~BareMetalSolutionTracingStub() override = default;

  explicit BareMetalSolutionTracingStub(
      std::shared_ptr<BareMetalSolutionStub> child);

  StatusOr<google::cloud::baremetalsolution::v2::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListInstancesRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::StartInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::StopInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDetachLun(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::DetachLunRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListVolumesResponse>
  ListVolumes(grpc::ClientContext& context,
              google::cloud::baremetalsolution::v2::ListVolumesRequest const&
                  request) override;

  StatusOr<google::cloud::baremetalsolution::v2::Volume> GetVolume(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetVolumeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateVolume(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResizeVolume(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListNetworksResponse>
  ListNetworks(grpc::ClientContext& context,
               google::cloud::baremetalsolution::v2::ListNetworksRequest const&
                   request) override;

  StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
  ListNetworkUsage(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
          request) override;

  StatusOr<google::cloud::baremetalsolution::v2::Network> GetNetwork(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetNetworkRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateNetwork(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::Lun> GetLun(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetLunRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListLunsResponse> ListLuns(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListLunsRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::NfsShare> GetNfsShare(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request)
      override;

  StatusOr<google::cloud::baremetalsolution::v2::ListNfsSharesResponse>
  ListNfsShares(
      grpc::ClientContext& context,
      google::cloud::baremetalsolution::v2::ListNfsSharesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateNfsShare(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
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
  std::shared_ptr<BareMetalSolutionStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<BareMetalSolutionStub> MakeBareMetalSolutionTracingStub(
    std::shared_ptr<BareMetalSolutionStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BAREMETALSOLUTION_INTERNAL_BARE_METAL_SOLUTION_TRACING_STUB_H
