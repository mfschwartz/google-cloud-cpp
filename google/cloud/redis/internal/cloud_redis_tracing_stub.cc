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

#include "google/cloud/redis/internal/cloud_redis_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace redis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudRedisTracingStub::CloudRedisTracingStub(
    std::shared_ptr<CloudRedisStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::redis::v1::ListInstancesResponse>
CloudRedisTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::cloud::redis::v1::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.redis.v1.CloudRedis",
                                     "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::cloud::redis::v1::Instance> CloudRedisTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::cloud::redis::v1::GetInstanceRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.redis.v1.CloudRedis", "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

StatusOr<google::cloud::redis::v1::InstanceAuthString>
CloudRedisTracingStub::GetInstanceAuthString(
    grpc::ClientContext& context,
    google::cloud::redis::v1::GetInstanceAuthStringRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.redis.v1.CloudRedis",
                                     "GetInstanceAuthString");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetInstanceAuthString(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::redis::v1::CreateInstanceRequest const& request) {
  return child_->AsyncCreateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::redis::v1::UpdateInstanceRequest const& request) {
  return child_->AsyncUpdateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncUpgradeInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::redis::v1::UpgradeInstanceRequest const& request) {
  return child_->AsyncUpgradeInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncImportInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::redis::v1::ImportInstanceRequest const& request) {
  return child_->AsyncImportInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncExportInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::redis::v1::ExportInstanceRequest const& request) {
  return child_->AsyncExportInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncFailoverInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::redis::v1::FailoverInstanceRequest const& request) {
  return child_->AsyncFailoverInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::redis::v1::DeleteInstanceRequest const& request) {
  return child_->AsyncDeleteInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncRescheduleMaintenance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::redis::v1::RescheduleMaintenanceRequest const& request) {
  return child_->AsyncRescheduleMaintenance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudRedisTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CloudRedisStub> MakeCloudRedisTracingStub(
    std::shared_ptr<CloudRedisStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudRedisTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_internal
}  // namespace cloud
}  // namespace google
