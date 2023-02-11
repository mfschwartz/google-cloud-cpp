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
// source: google/cloud/billing/v1/cloud_billing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_INTERNAL_CLOUD_BILLING_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_INTERNAL_CLOUD_BILLING_TRACING_STUB_H

#include "google/cloud/billing/internal/cloud_billing_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace billing_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudBillingTracingStub : public CloudBillingStub {
 public:
  ~CloudBillingTracingStub() override = default;

  explicit CloudBillingTracingStub(std::shared_ptr<CloudBillingStub> child);

  StatusOr<google::cloud::billing::v1::BillingAccount> GetBillingAccount(
      grpc::ClientContext& context,
      google::cloud::billing::v1::GetBillingAccountRequest const& request)
      override;

  StatusOr<google::cloud::billing::v1::ListBillingAccountsResponse>
  ListBillingAccounts(
      grpc::ClientContext& context,
      google::cloud::billing::v1::ListBillingAccountsRequest const& request)
      override;

  StatusOr<google::cloud::billing::v1::BillingAccount> UpdateBillingAccount(
      grpc::ClientContext& context,
      google::cloud::billing::v1::UpdateBillingAccountRequest const& request)
      override;

  StatusOr<google::cloud::billing::v1::BillingAccount> CreateBillingAccount(
      grpc::ClientContext& context,
      google::cloud::billing::v1::CreateBillingAccountRequest const& request)
      override;

  StatusOr<google::cloud::billing::v1::ListProjectBillingInfoResponse>
  ListProjectBillingInfo(
      grpc::ClientContext& context,
      google::cloud::billing::v1::ListProjectBillingInfoRequest const& request)
      override;

  StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  GetProjectBillingInfo(
      grpc::ClientContext& context,
      google::cloud::billing::v1::GetProjectBillingInfoRequest const& request)
      override;

  StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
  UpdateProjectBillingInfo(
      grpc::ClientContext& context,
      google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<CloudBillingStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<CloudBillingStub> MakeCloudBillingTracingStub(
    std::shared_ptr<CloudBillingStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_INTERNAL_CLOUD_BILLING_TRACING_STUB_H
