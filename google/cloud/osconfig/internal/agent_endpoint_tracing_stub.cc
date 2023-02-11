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
// source: google/cloud/osconfig/agentendpoint/v1/agentendpoint.proto

#include "google/cloud/osconfig/internal/agent_endpoint_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace osconfig_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AgentEndpointServiceTracingStub::AgentEndpointServiceTracingStub(
    std::shared_ptr<AgentEndpointServiceStub> child)
    : child_(std::move(child)) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationResponse>>
AgentEndpointServiceTracingStub::ReceiveTaskNotification(
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationRequest const& request) {
  return child_->ReceiveTaskNotification(std::move(context), request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
AgentEndpointServiceTracingStub::StartNextTask(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.osconfig.agentendpoint.v1.AgentEndpointService",
      "StartNextTask");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->StartNextTask(context, request));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
AgentEndpointServiceTracingStub::ReportTaskProgress(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.osconfig.agentendpoint.v1.AgentEndpointService",
      "ReportTaskProgress");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ReportTaskProgress(context, request));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
AgentEndpointServiceTracingStub::ReportTaskComplete(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.osconfig.agentendpoint.v1.AgentEndpointService",
      "ReportTaskComplete");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ReportTaskComplete(context, request));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
AgentEndpointServiceTracingStub::RegisterAgent(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.osconfig.agentendpoint.v1.AgentEndpointService",
      "RegisterAgent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->RegisterAgent(context, request));
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
AgentEndpointServiceTracingStub::ReportInventory(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.osconfig.agentendpoint.v1.AgentEndpointService",
      "ReportInventory");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ReportInventory(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AgentEndpointServiceStub> MakeAgentEndpointServiceTracingStub(
    std::shared_ptr<AgentEndpointServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AgentEndpointServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_internal
}  // namespace cloud
}  // namespace google
