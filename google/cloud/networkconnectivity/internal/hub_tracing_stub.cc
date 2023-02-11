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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/internal/hub_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace networkconnectivity_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

HubServiceTracingStub::HubServiceTracingStub(
    std::shared_ptr<HubServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::networkconnectivity::v1::ListHubsResponse>
HubServiceTracingStub::ListHubs(
    grpc::ClientContext& context,
    google::cloud::networkconnectivity::v1::ListHubsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListHubs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListHubs(context, request));
}

StatusOr<google::cloud::networkconnectivity::v1::Hub>
HubServiceTracingStub::GetHub(
    grpc::ClientContext& context,
    google::cloud::networkconnectivity::v1::GetHubRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetHub");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetHub(context, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncCreateHub(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  return child_->AsyncCreateHub(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncUpdateHub(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  return child_->AsyncUpdateHub(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncDeleteHub(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  return child_->AsyncDeleteHub(cq, std::move(context), request);
}

StatusOr<google::cloud::networkconnectivity::v1::ListSpokesResponse>
HubServiceTracingStub::ListSpokes(
    grpc::ClientContext& context,
    google::cloud::networkconnectivity::v1::ListSpokesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListSpokes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListSpokes(context, request));
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceTracingStub::GetSpoke(
    grpc::ClientContext& context,
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetSpoke");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetSpoke(context, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncCreateSpoke(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  return child_->AsyncCreateSpoke(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncUpdateSpoke(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  return child_->AsyncUpdateSpoke(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncDeleteSpoke(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  return child_->AsyncDeleteSpoke(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> HubServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<HubServiceStub> MakeHubServiceTracingStub(
    std::shared_ptr<HubServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<HubServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_internal
}  // namespace cloud
}  // namespace google
