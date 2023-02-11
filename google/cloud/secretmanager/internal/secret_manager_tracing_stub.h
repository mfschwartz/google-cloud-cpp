// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_INTERNAL_SECRET_MANAGER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_INTERNAL_SECRET_MANAGER_TRACING_STUB_H

#include "google/cloud/secretmanager/internal/secret_manager_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace secretmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SecretManagerServiceTracingStub : public SecretManagerServiceStub {
 public:
  ~SecretManagerServiceTracingStub() override = default;

  explicit SecretManagerServiceTracingStub(
      std::shared_ptr<SecretManagerServiceStub> child);

  StatusOr<google::cloud::secretmanager::v1::ListSecretsResponse> ListSecrets(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::ListSecretsRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::Secret> CreateSecret(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::CreateSecretRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> AddSecretVersion(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::AddSecretVersionRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::Secret> GetSecret(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::GetSecretRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::Secret> UpdateSecret(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::UpdateSecretRequest const& request)
      override;

  Status DeleteSecret(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::DeleteSecretRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::ListSecretVersionsResponse>
  ListSecretVersions(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::ListSecretVersionsRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> GetSecretVersion(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::GetSecretVersionRequest const& request)
      override;

  StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
  AccessSecretVersion(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DisableSecretVersion(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion> EnableSecretVersion(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
          request) override;

  StatusOr<google::cloud::secretmanager::v1::SecretVersion>
  DestroySecretVersion(
      grpc::ClientContext& context,
      google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<SecretManagerServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<SecretManagerServiceStub> MakeSecretManagerServiceTracingStub(
    std::shared_ptr<SecretManagerServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECRETMANAGER_INTERNAL_SECRET_MANAGER_TRACING_STUB_H
