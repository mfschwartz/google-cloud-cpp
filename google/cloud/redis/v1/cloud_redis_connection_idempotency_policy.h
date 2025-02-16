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
// source: google/cloud/redis/v1/cloud_redis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_CLOUD_REDIS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_CLOUD_REDIS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/redis/v1/cloud_redis.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace redis_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudRedisConnectionIdempotencyPolicy {
 public:
  virtual ~CloudRedisConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<CloudRedisConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListInstances(
      google::cloud::redis::v1::ListInstancesRequest request);

  virtual google::cloud::Idempotency GetInstance(
      google::cloud::redis::v1::GetInstanceRequest const& request);

  virtual google::cloud::Idempotency GetInstanceAuthString(
      google::cloud::redis::v1::GetInstanceAuthStringRequest const& request);

  virtual google::cloud::Idempotency CreateInstance(
      google::cloud::redis::v1::CreateInstanceRequest const& request);

  virtual google::cloud::Idempotency UpdateInstance(
      google::cloud::redis::v1::UpdateInstanceRequest const& request);

  virtual google::cloud::Idempotency UpgradeInstance(
      google::cloud::redis::v1::UpgradeInstanceRequest const& request);

  virtual google::cloud::Idempotency ImportInstance(
      google::cloud::redis::v1::ImportInstanceRequest const& request);

  virtual google::cloud::Idempotency ExportInstance(
      google::cloud::redis::v1::ExportInstanceRequest const& request);

  virtual google::cloud::Idempotency FailoverInstance(
      google::cloud::redis::v1::FailoverInstanceRequest const& request);

  virtual google::cloud::Idempotency DeleteInstance(
      google::cloud::redis::v1::DeleteInstanceRequest const& request);

  virtual google::cloud::Idempotency RescheduleMaintenance(
      google::cloud::redis::v1::RescheduleMaintenanceRequest const& request);
};

std::unique_ptr<CloudRedisConnectionIdempotencyPolicy>
MakeDefaultCloudRedisConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_CLOUD_REDIS_CONNECTION_IDEMPOTENCY_POLICY_H
