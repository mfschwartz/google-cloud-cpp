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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_APPLICATIONS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_APPLICATIONS_TRACING_STUB_H

#include "google/cloud/appengine/internal/applications_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ApplicationsTracingStub : public ApplicationsStub {
 public:
  ~ApplicationsTracingStub() override = default;

  explicit ApplicationsTracingStub(std::shared_ptr<ApplicationsStub> child);

  StatusOr<google::appengine::v1::Application> GetApplication(
      grpc::ClientContext& context,
      google::appengine::v1::GetApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateApplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::appengine::v1::CreateApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateApplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::appengine::v1::UpdateApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRepairApplication(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::appengine::v1::RepairApplicationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ApplicationsStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ApplicationsStub> MakeApplicationsTracingStub(
    std::shared_ptr<ApplicationsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_INTERNAL_APPLICATIONS_TRACING_STUB_H
