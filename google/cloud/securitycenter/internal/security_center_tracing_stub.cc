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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#include "google/cloud/securitycenter/internal/security_center_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace securitycenter_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecurityCenterTracingStub::SecurityCenterTracingStub(
    std::shared_ptr<SecurityCenterStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterTracingStub::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  return child_->AsyncBulkMuteFindings(cq, std::move(context), request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingStub::CreateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "CreateSource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateSource(context, request));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingStub::CreateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "CreateFinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateFinding(context, request));
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingStub::CreateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "CreateMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateMuteConfig(context, request));
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingStub::CreateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.securitycenter.v1.SecurityCenter",
                             "CreateNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateNotificationConfig(context, request));
}

Status SecurityCenterTracingStub::DeleteMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "DeleteMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteMuteConfig(context, request));
}

Status SecurityCenterTracingStub::DeleteNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.securitycenter.v1.SecurityCenter",
                             "DeleteNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteNotificationConfig(context, request));
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingStub::GetBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "GetBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetBigQueryExport(context, request));
}

StatusOr<google::iam::v1::Policy> SecurityCenterTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingStub::GetMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "GetMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetMuteConfig(context, request));
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingStub::GetNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "GetNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetNotificationConfig(context, request));
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterTracingStub::GetOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.securitycenter.v1.SecurityCenter",
                             "GetOrganizationSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetOrganizationSettings(context, request));
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingStub::GetSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "GetSource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetSource(context, request));
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
SecurityCenterTracingStub::GroupAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "GroupAssets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GroupAssets(context, request));
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
SecurityCenterTracingStub::GroupFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "GroupFindings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GroupFindings(context, request));
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
SecurityCenterTracingStub::ListAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "ListAssets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListAssets(context, request));
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
SecurityCenterTracingStub::ListFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "ListFindings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListFindings(context, request));
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
SecurityCenterTracingStub::ListMuteConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "ListMuteConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListMuteConfigs(context, request));
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
SecurityCenterTracingStub::ListNotificationConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.securitycenter.v1.SecurityCenter",
                             "ListNotificationConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListNotificationConfigs(context, request));
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
SecurityCenterTracingStub::ListSources(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "ListSources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListSources(context, request));
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterTracingStub::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  return child_->AsyncRunAssetDiscovery(cq, std::move(context), request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingStub::SetFindingState(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "SetFindingState");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetFindingState(context, request));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingStub::SetMute(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "SetMute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->SetMute(context, request));
}

StatusOr<google::iam::v1::Policy> SecurityCenterTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterTracingStub::UpdateExternalSystem(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "UpdateExternalSystem");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateExternalSystem(context, request));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingStub::UpdateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "UpdateFinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateFinding(context, request));
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingStub::UpdateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "UpdateMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateMuteConfig(context, request));
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingStub::UpdateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.securitycenter.v1.SecurityCenter",
                             "UpdateNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateNotificationConfig(context, request));
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterTracingStub::UpdateOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.securitycenter.v1.SecurityCenter",
                             "UpdateOrganizationSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->UpdateOrganizationSettings(context, request));
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingStub::UpdateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "UpdateSource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateSource(context, request));
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterTracingStub::UpdateSecurityMarks(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "UpdateSecurityMarks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateSecurityMarks(context, request));
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingStub::CreateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "CreateBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateBigQueryExport(context, request));
}

Status SecurityCenterTracingStub::DeleteBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "DeleteBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteBigQueryExport(context, request));
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingStub::UpdateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "UpdateBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateBigQueryExport(context, request));
}

StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
SecurityCenterTracingStub::ListBigQueryExports(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.securitycenter.v1.SecurityCenter", "ListBigQueryExports");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListBigQueryExports(context, request));
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> SecurityCenterTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SecurityCenterStub> MakeSecurityCenterTracingStub(
    std::shared_ptr<SecurityCenterStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SecurityCenterTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_internal
}  // namespace cloud
}  // namespace google
