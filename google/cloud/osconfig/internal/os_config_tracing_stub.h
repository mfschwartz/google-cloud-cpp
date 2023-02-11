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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_INTERNAL_OS_CONFIG_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_INTERNAL_OS_CONFIG_TRACING_STUB_H

#include "google/cloud/osconfig/internal/os_config_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace osconfig_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class OsConfigServiceTracingStub : public OsConfigServiceStub {
 public:
  ~OsConfigServiceTracingStub() override = default;

  explicit OsConfigServiceTracingStub(
      std::shared_ptr<OsConfigServiceStub> child);

  StatusOr<google::cloud::osconfig::v1::PatchJob> ExecutePatchJob(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ExecutePatchJobRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::PatchJob> GetPatchJob(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::GetPatchJobRequest const& request) override;

  StatusOr<google::cloud::osconfig::v1::PatchJob> CancelPatchJob(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::CancelPatchJobRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::ListPatchJobsResponse> ListPatchJobs(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ListPatchJobsRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse>
  ListPatchJobInstanceDetails(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest const&
          request) override;

  StatusOr<google::cloud::osconfig::v1::PatchDeployment> CreatePatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::PatchDeployment> GetPatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::ListPatchDeploymentsResponse>
  ListPatchDeployments(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ListPatchDeploymentsRequest const& request)
      override;

  Status DeletePatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::PatchDeployment> UpdatePatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::PatchDeployment> PausePatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::osconfig::v1::PatchDeployment> ResumePatchDeployment(
      grpc::ClientContext& context,
      google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request)
      override;

 private:
  std::shared_ptr<OsConfigServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<OsConfigServiceStub> MakeOsConfigServiceTracingStub(
    std::shared_ptr<OsConfigServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSCONFIG_INTERNAL_OS_CONFIG_TRACING_STUB_H
