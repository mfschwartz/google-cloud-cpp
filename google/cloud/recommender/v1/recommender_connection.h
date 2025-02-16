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
// source: google/cloud/recommender/v1/recommender_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_RECOMMENDER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_RECOMMENDER_CONNECTION_H

#include "google/cloud/recommender/v1/internal/recommender_retry_traits.h"
#include "google/cloud/recommender/v1/recommender_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/recommender/v1/recommender_service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace recommender_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RecommenderRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    recommender_v1_internal::RecommenderRetryTraits>;

using RecommenderLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        recommender_v1_internal::RecommenderRetryTraits>;

using RecommenderLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        recommender_v1_internal::RecommenderRetryTraits>;

/**
 * The `RecommenderConnection` object for `RecommenderClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RecommenderClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `RecommenderClient`.
 *
 * To create a concrete instance, see `MakeRecommenderConnection()`.
 *
 * For mocking, see `recommender_v1_mocks::MockRecommenderConnection`.
 */
class RecommenderConnection {
 public:
  virtual ~RecommenderConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::recommender::v1::Insight> ListInsights(
      google::cloud::recommender::v1::ListInsightsRequest request);

  virtual StatusOr<google::cloud::recommender::v1::Insight> GetInsight(
      google::cloud::recommender::v1::GetInsightRequest const& request);

  virtual StatusOr<google::cloud::recommender::v1::Insight> MarkInsightAccepted(
      google::cloud::recommender::v1::MarkInsightAcceptedRequest const&
          request);

  virtual StreamRange<google::cloud::recommender::v1::Recommendation>
  ListRecommendations(
      google::cloud::recommender::v1::ListRecommendationsRequest request);

  virtual StatusOr<google::cloud::recommender::v1::Recommendation>
  GetRecommendation(
      google::cloud::recommender::v1::GetRecommendationRequest const& request);

  virtual StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationClaimed(
      google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
          request);

  virtual StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationSucceeded(
      google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
          request);

  virtual StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationFailed(
      google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
          request);

  virtual StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  GetRecommenderConfig(
      google::cloud::recommender::v1::GetRecommenderConfigRequest const&
          request);

  virtual StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  UpdateRecommenderConfig(
      google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
          request);

  virtual StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  GetInsightTypeConfig(
      google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
          request);

  virtual StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  UpdateInsightTypeConfig(
      google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
          request);
};

/**
 * A factory function to construct an object of type `RecommenderConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of RecommenderClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `RecommenderConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::recommender_v1::RecommenderPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `RecommenderConnection` created by
 * this function.
 */
std::shared_ptr<RecommenderConnection> MakeRecommenderConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_RECOMMENDER_CONNECTION_H
