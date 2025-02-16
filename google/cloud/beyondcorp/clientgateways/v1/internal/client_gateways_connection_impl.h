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
// source:
// google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_INTERNAL_CLIENT_GATEWAYS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_INTERNAL_CLIENT_GATEWAYS_CONNECTION_IMPL_H

#include "google/cloud/beyondcorp/clientgateways/v1/client_gateways_connection.h"
#include "google/cloud/beyondcorp/clientgateways/v1/client_gateways_connection_idempotency_policy.h"
#include "google/cloud/beyondcorp/clientgateways/v1/client_gateways_options.h"
#include "google/cloud/beyondcorp/clientgateways/v1/internal/client_gateways_retry_traits.h"
#include "google/cloud/beyondcorp/clientgateways/v1/internal/client_gateways_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_clientgateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ClientGatewaysServiceConnectionImpl
    : public beyondcorp_clientgateways_v1::ClientGatewaysServiceConnection {
 public:
  ~ClientGatewaysServiceConnectionImpl() override = default;

  ClientGatewaysServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          beyondcorp_clientgateways_v1_internal::ClientGatewaysServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
  ListClientGateways(
      google::cloud::beyondcorp::clientgateways::v1::ListClientGatewaysRequest
          request) override;

  StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
  GetClientGateway(google::cloud::beyondcorp::clientgateways::v1::
                       GetClientGatewayRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>>
  CreateClientGateway(google::cloud::beyondcorp::clientgateways::v1::
                          CreateClientGatewayRequest const& request) override;

  future<StatusOr<google::cloud::beyondcorp::clientgateways::v1::
                      ClientGatewayOperationMetadata>>
  DeleteClientGateway(google::cloud::beyondcorp::clientgateways::v1::
                          DeleteClientGatewayRequest const& request) override;

 private:
  std::unique_ptr<
      beyondcorp_clientgateways_v1::ClientGatewaysServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<beyondcorp_clientgateways_v1::
                        ClientGatewaysServiceRetryPolicyOption>()) {
      return options
          .get<beyondcorp_clientgateways_v1::
                   ClientGatewaysServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<beyondcorp_clientgateways_v1::
                 ClientGatewaysServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<beyondcorp_clientgateways_v1::
                        ClientGatewaysServiceBackoffPolicyOption>()) {
      return options
          .get<beyondcorp_clientgateways_v1::
                   ClientGatewaysServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<beyondcorp_clientgateways_v1::
                 ClientGatewaysServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<beyondcorp_clientgateways_v1::
                      ClientGatewaysServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            beyondcorp_clientgateways_v1::
                ClientGatewaysServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<beyondcorp_clientgateways_v1::
                   ClientGatewaysServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<beyondcorp_clientgateways_v1::
                 ClientGatewaysServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<beyondcorp_clientgateways_v1::
                        ClientGatewaysServicePollingPolicyOption>()) {
      return options
          .get<beyondcorp_clientgateways_v1::
                   ClientGatewaysServicePollingPolicyOption>()
          ->clone();
    }
    return options_
        .get<beyondcorp_clientgateways_v1::
                 ClientGatewaysServicePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      beyondcorp_clientgateways_v1_internal::ClientGatewaysServiceStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientgateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_INTERNAL_CLIENT_GATEWAYS_CONNECTION_IMPL_H
