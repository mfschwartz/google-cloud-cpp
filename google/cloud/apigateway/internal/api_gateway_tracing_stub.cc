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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#include "google/cloud/apigateway/internal/api_gateway_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace apigateway_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ApiGatewayServiceTracingStub::ApiGatewayServiceTracingStub(
    std::shared_ptr<ApiGatewayServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::apigateway::v1::ListGatewaysResponse>
ApiGatewayServiceTracingStub::ListGateways(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListGatewaysRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "ListGateways");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListGateways(context, request));
}

StatusOr<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceTracingStub::GetGateway(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "GetGateway");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetGateway(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncCreateGateway(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::CreateGatewayRequest const& request) {
  return child_->AsyncCreateGateway(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncUpdateGateway(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::UpdateGatewayRequest const& request) {
  return child_->AsyncUpdateGateway(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncDeleteGateway(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::DeleteGatewayRequest const& request) {
  return child_->AsyncDeleteGateway(cq, std::move(context), request);
}

StatusOr<google::cloud::apigateway::v1::ListApisResponse>
ApiGatewayServiceTracingStub::ListApis(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListApisRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "ListApis");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListApis(context, request));
}

StatusOr<google::cloud::apigateway::v1::Api>
ApiGatewayServiceTracingStub::GetApi(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetApiRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "GetApi");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetApi(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncCreateApi(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::CreateApiRequest const& request) {
  return child_->AsyncCreateApi(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncUpdateApi(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::UpdateApiRequest const& request) {
  return child_->AsyncUpdateApi(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncDeleteApi(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::DeleteApiRequest const& request) {
  return child_->AsyncDeleteApi(cq, std::move(context), request);
}

StatusOr<google::cloud::apigateway::v1::ListApiConfigsResponse>
ApiGatewayServiceTracingStub::ListApiConfigs(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::ListApiConfigsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "ListApiConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListApiConfigs(context, request));
}

StatusOr<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceTracingStub::GetApiConfig(
    grpc::ClientContext& context,
    google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "GetApiConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetApiConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncCreateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::CreateApiConfigRequest const& request) {
  return child_->AsyncCreateApiConfig(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncUpdateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::UpdateApiConfigRequest const& request) {
  return child_->AsyncUpdateApiConfig(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncDeleteApiConfig(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::apigateway::v1::DeleteApiConfigRequest const& request) {
  return child_->AsyncDeleteApiConfig(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ApiGatewayServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ApiGatewayServiceStub> MakeApiGatewayServiceTracingStub(
    std::shared_ptr<ApiGatewayServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ApiGatewayServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_internal
}  // namespace cloud
}  // namespace google
