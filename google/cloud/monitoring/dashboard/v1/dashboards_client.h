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
// source: google/monitoring/dashboard/v1/dashboards_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_DASHBOARD_V1_DASHBOARDS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_DASHBOARD_V1_DASHBOARDS_CLIENT_H

#include "google/cloud/monitoring/dashboard/v1/dashboards_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_dashboard_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages Stackdriver dashboards. A dashboard is an arrangement of data
/// display widgets in a specific layout.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class DashboardsServiceClient {
 public:
  explicit DashboardsServiceClient(
      std::shared_ptr<DashboardsServiceConnection> connection,
      Options opts = {});
  ~DashboardsServiceClient();

  ///@{
  /// @name Copy and move support
  DashboardsServiceClient(DashboardsServiceClient const&) = default;
  DashboardsServiceClient& operator=(DashboardsServiceClient const&) = default;
  DashboardsServiceClient(DashboardsServiceClient&&) = default;
  DashboardsServiceClient& operator=(DashboardsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(DashboardsServiceClient const& a,
                         DashboardsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DashboardsServiceClient const& a,
                         DashboardsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a new custom dashboard. For examples on how you can use this API to
  /// create dashboards, see [Managing dashboards by
  /// API](https://cloud.google.com/monitoring/dashboards/api-dashboard). This
  /// method requires the `monitoring.dashboards.create` permission on the
  /// specified project. For more information about permissions, see [Cloud
  /// Identity and Access Management](https://cloud.google.com/iam).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.dashboard.v1.CreateDashboardRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.dashboard.v1.Dashboard])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.dashboard.v1.CreateDashboardRequest]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboards_service.proto#L104}
  /// [google.monitoring.dashboard.v1.Dashboard]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboard.proto#L34}
  ///
  // clang-format on
  StatusOr<google::monitoring::dashboard::v1::Dashboard> CreateDashboard(
      google::monitoring::dashboard::v1::CreateDashboardRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists the existing dashboards.
  ///
  /// This method requires the `monitoring.dashboards.list` permission
  /// on the specified project. For more information, see
  /// [Cloud Identity and Access Management](https://cloud.google.com/iam).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.dashboard.v1.ListDashboardsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.monitoring.dashboard.v1.Dashboard], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.dashboard.v1.Dashboard]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboard.proto#L34}
  /// [google.monitoring.dashboard.v1.ListDashboardsRequest]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboards_service.proto#L121}
  ///
  // clang-format on
  StreamRange<google::monitoring::dashboard::v1::Dashboard> ListDashboards(
      google::monitoring::dashboard::v1::ListDashboardsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Fetches a specific dashboard.
  ///
  /// This method requires the `monitoring.dashboards.get` permission
  /// on the specified dashboard. For more information, see
  /// [Cloud Identity and Access Management](https://cloud.google.com/iam).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.dashboard.v1.GetDashboardRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.dashboard.v1.Dashboard])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.dashboard.v1.Dashboard]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboard.proto#L34}
  /// [google.monitoring.dashboard.v1.GetDashboardRequest]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboards_service.proto#L154}
  ///
  // clang-format on
  StatusOr<google::monitoring::dashboard::v1::Dashboard> GetDashboard(
      google::monitoring::dashboard::v1::GetDashboardRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes an existing custom dashboard.
  ///
  /// This method requires the `monitoring.dashboards.delete` permission
  /// on the specified dashboard. For more information, see
  /// [Cloud Identity and Access Management](https://cloud.google.com/iam).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.dashboard.v1.DeleteDashboardRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.dashboard.v1.DeleteDashboardRequest]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboards_service.proto#L169}
  ///
  // clang-format on
  Status DeleteDashboard(
      google::monitoring::dashboard::v1::DeleteDashboardRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Replaces an existing custom dashboard with a new definition.
  ///
  /// This method requires the `monitoring.dashboards.update` permission
  /// on the specified dashboard. For more information, see
  /// [Cloud Identity and Access Management](https://cloud.google.com/iam).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.monitoring.dashboard.v1.UpdateDashboardRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.monitoring.dashboard.v1.Dashboard])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.monitoring.dashboard.v1.Dashboard]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboard.proto#L34}
  /// [google.monitoring.dashboard.v1.UpdateDashboardRequest]: @googleapis_reference_link{google/monitoring/dashboard/v1/dashboards_service.proto#L182}
  ///
  // clang-format on
  StatusOr<google::monitoring::dashboard::v1::Dashboard> UpdateDashboard(
      google::monitoring::dashboard::v1::UpdateDashboardRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DashboardsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_dashboard_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_DASHBOARD_V1_DASHBOARDS_CLIENT_H
