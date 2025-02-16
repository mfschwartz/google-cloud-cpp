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
// source: google/cloud/sql/v1/cloud_sql_databases.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_DATABASES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_DATABASES_REST_CONNECTION_IMPL_H

#include "google/cloud/sql/v1/internal/sql_databases_rest_stub.h"
#include "google/cloud/sql/v1/internal/sql_databases_retry_traits.h"
#include "google/cloud/sql/v1/sql_databases_connection.h"
#include "google/cloud/sql/v1/sql_databases_connection_idempotency_policy.h"
#include "google/cloud/sql/v1/sql_databases_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SqlDatabasesServiceRestConnectionImpl
    : public sql_v1::SqlDatabasesServiceConnection {
 public:
  ~SqlDatabasesServiceRestConnectionImpl() override = default;

  SqlDatabasesServiceRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<sql_v1_internal::SqlDatabasesServiceRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlDatabasesDeleteRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Database> Get(
      google::cloud::sql::v1::SqlDatabasesGetRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::sql::v1::SqlDatabasesInsertRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::DatabasesListResponse> List(
      google::cloud::sql::v1::SqlDatabasesListRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> Patch(
      google::cloud::sql::v1::SqlDatabasesUpdateRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Update(
      google::cloud::sql::v1::SqlDatabasesUpdateRequest const& request)
      override;

 private:
  std::unique_ptr<sql_v1::SqlDatabasesServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<sql_v1::SqlDatabasesServiceRetryPolicyOption>()) {
      return options.get<sql_v1::SqlDatabasesServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<sql_v1::SqlDatabasesServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<sql_v1::SqlDatabasesServiceBackoffPolicyOption>()) {
      return options.get<sql_v1::SqlDatabasesServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<sql_v1::SqlDatabasesServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<sql_v1::SqlDatabasesServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            sql_v1::SqlDatabasesServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<sql_v1::SqlDatabasesServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<sql_v1::SqlDatabasesServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<sql_v1_internal::SqlDatabasesServiceRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_DATABASES_REST_CONNECTION_IMPL_H
