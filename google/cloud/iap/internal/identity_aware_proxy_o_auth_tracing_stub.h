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
// source: google/cloud/iap/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_O_AUTH_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_O_AUTH_TRACING_STUB_H

#include "google/cloud/iap/internal/identity_aware_proxy_o_auth_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace iap_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class IdentityAwareProxyOAuthServiceTracingStub
    : public IdentityAwareProxyOAuthServiceStub {
 public:
  ~IdentityAwareProxyOAuthServiceTracingStub() override = default;

  explicit IdentityAwareProxyOAuthServiceTracingStub(
      std::shared_ptr<IdentityAwareProxyOAuthServiceStub> child);

  StatusOr<google::cloud::iap::v1::ListBrandsResponse> ListBrands(
      grpc::ClientContext& context,
      google::cloud::iap::v1::ListBrandsRequest const& request) override;

  StatusOr<google::cloud::iap::v1::Brand> CreateBrand(
      grpc::ClientContext& context,
      google::cloud::iap::v1::CreateBrandRequest const& request) override;

  StatusOr<google::cloud::iap::v1::Brand> GetBrand(
      grpc::ClientContext& context,
      google::cloud::iap::v1::GetBrandRequest const& request) override;

  StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  CreateIdentityAwareProxyClient(
      grpc::ClientContext& context,
      google::cloud::iap::v1::CreateIdentityAwareProxyClientRequest const&
          request) override;

  StatusOr<google::cloud::iap::v1::ListIdentityAwareProxyClientsResponse>
  ListIdentityAwareProxyClients(
      grpc::ClientContext& context,
      google::cloud::iap::v1::ListIdentityAwareProxyClientsRequest const&
          request) override;

  StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  GetIdentityAwareProxyClient(
      grpc::ClientContext& context,
      google::cloud::iap::v1::GetIdentityAwareProxyClientRequest const& request)
      override;

  StatusOr<google::cloud::iap::v1::IdentityAwareProxyClient>
  ResetIdentityAwareProxyClientSecret(
      grpc::ClientContext& context,
      google::cloud::iap::v1::ResetIdentityAwareProxyClientSecretRequest const&
          request) override;

  Status DeleteIdentityAwareProxyClient(
      grpc::ClientContext& context,
      google::cloud::iap::v1::DeleteIdentityAwareProxyClientRequest const&
          request) override;

 private:
  std::shared_ptr<IdentityAwareProxyOAuthServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<IdentityAwareProxyOAuthServiceStub>
MakeIdentityAwareProxyOAuthServiceTracingStub(
    std::shared_ptr<IdentityAwareProxyOAuthServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_INTERNAL_IDENTITY_AWARE_PROXY_O_AUTH_TRACING_STUB_H
