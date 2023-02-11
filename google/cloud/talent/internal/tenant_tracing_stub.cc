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
// source: google/cloud/talent/v4/tenant_service.proto

#include "google/cloud/talent/internal/tenant_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TenantServiceTracingStub::TenantServiceTracingStub(
    std::shared_ptr<TenantServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::talent::v4::Tenant>
TenantServiceTracingStub::CreateTenant(
    grpc::ClientContext& context,
    google::cloud::talent::v4::CreateTenantRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.talent.v4.TenantService",
                                     "CreateTenant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateTenant(context, request));
}

StatusOr<google::cloud::talent::v4::Tenant> TenantServiceTracingStub::GetTenant(
    grpc::ClientContext& context,
    google::cloud::talent::v4::GetTenantRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.talent.v4.TenantService",
                                     "GetTenant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetTenant(context, request));
}

StatusOr<google::cloud::talent::v4::Tenant>
TenantServiceTracingStub::UpdateTenant(
    grpc::ClientContext& context,
    google::cloud::talent::v4::UpdateTenantRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.talent.v4.TenantService",
                                     "UpdateTenant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateTenant(context, request));
}

Status TenantServiceTracingStub::DeleteTenant(
    grpc::ClientContext& context,
    google::cloud::talent::v4::DeleteTenantRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.talent.v4.TenantService",
                                     "DeleteTenant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteTenant(context, request));
}

StatusOr<google::cloud::talent::v4::ListTenantsResponse>
TenantServiceTracingStub::ListTenants(
    grpc::ClientContext& context,
    google::cloud::talent::v4::ListTenantsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.talent.v4.TenantService",
                                     "ListTenants");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListTenants(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<TenantServiceStub> MakeTenantServiceTracingStub(
    std::shared_ptr<TenantServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TenantServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google
