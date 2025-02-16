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
// source: google/cloud/gaming/v1/realms_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_REALMS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_REALMS_CLIENT_H

#include "google/cloud/gameservices/v1/realms_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A realm is a grouping of game server clusters that are considered
/// interchangeable.
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
class RealmsServiceClient {
 public:
  explicit RealmsServiceClient(
      std::shared_ptr<RealmsServiceConnection> connection, Options opts = {});
  ~RealmsServiceClient();

  ///@{
  /// @name Copy and move support
  RealmsServiceClient(RealmsServiceClient const&) = default;
  RealmsServiceClient& operator=(RealmsServiceClient const&) = default;
  RealmsServiceClient(RealmsServiceClient&&) = default;
  RealmsServiceClient& operator=(RealmsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RealmsServiceClient const& a,
                         RealmsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RealmsServiceClient const& a,
                         RealmsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists realms in a given project and location.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}`.
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
  ///     [google.cloud.gaming.v1.Realm], or rather,
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
  /// [google.cloud.gaming.v1.ListRealmsRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L30}
  /// [google.cloud.gaming.v1.Realm]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  // clang-format on
  StreamRange<google::cloud::gaming::v1::Realm> ListRealms(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists realms in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.ListRealmsRequest].
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
  ///     [google.cloud.gaming.v1.Realm], or rather,
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
  /// [google.cloud.gaming.v1.ListRealmsRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L30}
  /// [google.cloud.gaming.v1.Realm]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  // clang-format on
  StreamRange<google::cloud::gaming::v1::Realm> ListRealms(
      google::cloud::gaming::v1::ListRealmsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single realm.
  ///
  /// @param name  Required. The name of the realm to retrieve, in the following form:
  ///  `projects/{project}/locations/{location}/realms/{realm}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.gaming.v1.Realm])
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
  /// [google.cloud.gaming.v1.GetRealmRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L73}
  /// [google.cloud.gaming.v1.Realm]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  // clang-format on
  StatusOr<google::cloud::gaming::v1::Realm> GetRealm(std::string const& name,
                                                      Options opts = {});

  // clang-format off
  ///
  /// Gets details of a single realm.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.GetRealmRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.gaming.v1.Realm])
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
  /// [google.cloud.gaming.v1.GetRealmRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L73}
  /// [google.cloud.gaming.v1.Realm]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  // clang-format on
  StatusOr<google::cloud::gaming::v1::Realm> GetRealm(
      google::cloud::gaming::v1::GetRealmRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new realm in a given project and location.
  ///
  /// @param parent  Required. The parent resource name, in the following form:
  ///  `projects/{project}/locations/{location}`.
  /// @param realm  Required. The realm resource to be created.
  /// @param realm_id  Required. The ID of the realm resource to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.Realm] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.CreateRealmRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L85}
  /// [google.cloud.gaming.v1.Realm]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::Realm>> CreateRealm(
      std::string const& parent, google::cloud::gaming::v1::Realm const& realm,
      std::string const& realm_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a new realm in a given project and location.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.CreateRealmRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.Realm] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.CreateRealmRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L85}
  /// [google.cloud.gaming.v1.Realm]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::Realm>> CreateRealm(
      google::cloud::gaming::v1::CreateRealmRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a single realm.
  ///
  /// @param name  Required. The name of the realm to delete, in the following form:
  ///  `projects/{project}/locations/{location}/realms/{realm}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.OperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.DeleteRealmRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L103}
  /// [google.cloud.gaming.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L28}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>> DeleteRealm(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a single realm.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.DeleteRealmRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.OperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.DeleteRealmRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L103}
  /// [google.cloud.gaming.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/gaming/v1/common.proto#L28}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>> DeleteRealm(
      google::cloud::gaming::v1::DeleteRealmRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Patches a single realm.
  ///
  /// @param realm  Required. The realm to be updated.
  ///  Only fields specified in update_mask are updated.
  /// @param update_mask  Required. The update mask applies to the resource. For the `FieldMask`
  ///  definition, see
  ///  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.Realm] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.Realm]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  /// [google.cloud.gaming.v1.UpdateRealmRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L115}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::Realm>> UpdateRealm(
      google::cloud::gaming::v1::Realm const& realm,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Patches a single realm.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.UpdateRealmRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.gaming.v1.Realm] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.gaming.v1.Realm]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L151}
  /// [google.cloud.gaming.v1.UpdateRealmRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L115}
  ///
  // clang-format on
  future<StatusOr<google::cloud::gaming::v1::Realm>> UpdateRealm(
      google::cloud::gaming::v1::UpdateRealmRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Previews patches to a single realm.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.gaming.v1.PreviewRealmUpdateRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.gaming.v1.PreviewRealmUpdateResponse])
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
  /// [google.cloud.gaming.v1.PreviewRealmUpdateRequest]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L127}
  /// [google.cloud.gaming.v1.PreviewRealmUpdateResponse]: @googleapis_reference_link{google/cloud/gaming/v1/realms.proto#L142}
  ///
  // clang-format on
  StatusOr<google::cloud::gaming::v1::PreviewRealmUpdateResponse>
  PreviewRealmUpdate(
      google::cloud::gaming::v1::PreviewRealmUpdateRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<RealmsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_V1_REALMS_CLIENT_H
