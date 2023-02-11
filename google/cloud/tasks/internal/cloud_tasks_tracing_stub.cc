// Copyright 2021 Google LLC
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
// source: google/cloud/tasks/v2/cloudtasks.proto

#include "google/cloud/tasks/internal/cloud_tasks_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace tasks_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudTasksTracingStub::CloudTasksTracingStub(
    std::shared_ptr<CloudTasksStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::tasks::v2::ListQueuesResponse>
CloudTasksTracingStub::ListQueues(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ListQueuesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "ListQueues");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListQueues(context, request));
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksTracingStub::GetQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::GetQueueRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "GetQueue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetQueue(context, request));
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksTracingStub::CreateQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::CreateQueueRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "CreateQueue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateQueue(context, request));
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksTracingStub::UpdateQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::UpdateQueueRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "UpdateQueue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateQueue(context, request));
}

Status CloudTasksTracingStub::DeleteQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::DeleteQueueRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "DeleteQueue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteQueue(context, request));
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksTracingStub::PurgeQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::PurgeQueueRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "PurgeQueue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->PurgeQueue(context, request));
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksTracingStub::PauseQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::PauseQueueRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "PauseQueue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->PauseQueue(context, request));
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksTracingStub::ResumeQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ResumeQueueRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "ResumeQueue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ResumeQueue(context, request));
}

StatusOr<google::iam::v1::Policy> CloudTasksTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks",
                                     "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> CloudTasksTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks",
                                     "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudTasksTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks",
                                     "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

StatusOr<google::cloud::tasks::v2::ListTasksResponse>
CloudTasksTracingStub::ListTasks(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ListTasksRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "ListTasks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListTasks(context, request));
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksTracingStub::GetTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::GetTaskRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "GetTask");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetTask(context, request));
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksTracingStub::CreateTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::CreateTaskRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "CreateTask");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateTask(context, request));
}

Status CloudTasksTracingStub::DeleteTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::DeleteTaskRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "DeleteTask");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteTask(context, request));
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksTracingStub::RunTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::RunTaskRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.tasks.v2.CloudTasks", "RunTask");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->RunTask(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CloudTasksStub> MakeCloudTasksTracingStub(
    std::shared_ptr<CloudTasksStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudTasksTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_internal
}  // namespace cloud
}  // namespace google
