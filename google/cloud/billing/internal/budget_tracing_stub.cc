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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#include "google/cloud/billing/internal/budget_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace billing_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BudgetServiceTracingStub::BudgetServiceTracingStub(
    std::shared_ptr<BudgetServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceTracingStub::CreateBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::CreateBudgetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.billing.budgets.v1.BudgetService", "CreateBudget");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateBudget(context, request));
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceTracingStub::UpdateBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.billing.budgets.v1.BudgetService", "UpdateBudget");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateBudget(context, request));
}

StatusOr<google::cloud::billing::budgets::v1::Budget>
BudgetServiceTracingStub::GetBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::GetBudgetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.billing.budgets.v1.BudgetService", "GetBudget");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetBudget(context, request));
}

StatusOr<google::cloud::billing::budgets::v1::ListBudgetsResponse>
BudgetServiceTracingStub::ListBudgets(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::ListBudgetsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.billing.budgets.v1.BudgetService", "ListBudgets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListBudgets(context, request));
}

Status BudgetServiceTracingStub::DeleteBudget(
    grpc::ClientContext& context,
    google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.billing.budgets.v1.BudgetService", "DeleteBudget");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteBudget(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<BudgetServiceStub> MakeBudgetServiceTracingStub(
    std::shared_ptr<BudgetServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BudgetServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_internal
}  // namespace cloud
}  // namespace google
