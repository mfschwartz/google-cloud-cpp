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
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_TRACING_CONNECTION_H

#include "google/cloud/gkemulticloud/v1/azure_clusters_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class AzureClustersTracingConnection
    : public gkemulticloud_v1::AzureClustersConnection {
 public:
  ~AzureClustersTracingConnection() override = default;

  explicit AzureClustersTracingConnection(
      std::shared_ptr<gkemulticloud_v1::AzureClustersConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureClient>>
  CreateAzureClient(
      google::cloud::gkemulticloud::v1::CreateAzureClientRequest const& request)
      override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureClient> GetAzureClient(
      google::cloud::gkemulticloud::v1::GetAzureClientRequest const& request)
      override;

  StreamRange<google::cloud::gkemulticloud::v1::AzureClient> ListAzureClients(
      google::cloud::gkemulticloud::v1::ListAzureClientsRequest request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureClient(
      google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const& request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
  CreateAzureCluster(
      google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureCluster>>
  UpdateAzureCluster(
      google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureCluster> GetAzureCluster(
      google::cloud::gkemulticloud::v1::GetAzureClusterRequest const& request)
      override;

  StreamRange<google::cloud::gkemulticloud::v1::AzureCluster> ListAzureClusters(
      google::cloud::gkemulticloud::v1::ListAzureClustersRequest request)
      override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureCluster(
      google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenResponse>
  GenerateAzureAccessToken(
      google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
  CreateAzureNodePool(
      google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&
          request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool>>
  UpdateAzureNodePool(
      google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureNodePool> GetAzureNodePool(
      google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const& request)
      override;

  StreamRange<google::cloud::gkemulticloud::v1::AzureNodePool>
  ListAzureNodePools(google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest
                         request) override;

  future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
  DeleteAzureNodePool(
      google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&
          request) override;

  StatusOr<google::cloud::gkemulticloud::v1::AzureServerConfig>
  GetAzureServerConfig(
      google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&
          request) override;

 private:
  std::shared_ptr<gkemulticloud_v1::AzureClustersConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<gkemulticloud_v1::AzureClustersConnection>
MakeAzureClustersTracingConnection(
    std::shared_ptr<gkemulticloud_v1::AzureClustersConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEMULTICLOUD_V1_INTERNAL_AZURE_CLUSTERS_TRACING_CONNECTION_H
