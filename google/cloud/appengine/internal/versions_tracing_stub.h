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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_VERSIONS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_VERSIONS_TRACING_STUB_H

#include "google/cloud/appengine/internal/versions_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class VersionsTracingStub : public VersionsStub {
 public:
  ~VersionsTracingStub() override = default;

  explicit VersionsTracingStub(std::shared_ptr<VersionsStub> child);

  StatusOr<google::appengine::v1::ListVersionsResponse> ListVersions(
      grpc::ClientContext& context,
      google::appengine::v1::ListVersionsRequest const& request) override;

  StatusOr<google::appengine::v1::Version> GetVersion(
      grpc::ClientContext& context,
      google::appengine::v1::GetVersionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateVersion(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::appengine::v1::CreateVersionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateVersion(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::appengine::v1::UpdateVersionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteVersion(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::appengine::v1::DeleteVersionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<VersionsStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<VersionsStub> MakeVersionsTracingStub(
    std::shared_ptr<VersionsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_VERSIONS_TRACING_STUB_H
