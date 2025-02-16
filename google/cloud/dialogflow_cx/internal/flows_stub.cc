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
// source: google/cloud/dialogflow/cx/v3/flow.proto

#include "google/cloud/dialogflow_cx/internal/flows_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/flow.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FlowsStub::~FlowsStub() = default;

StatusOr<google::cloud::dialogflow::cx::v3::Flow> DefaultFlowsStub::CreateFlow(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::CreateFlowRequest const& request) {
  google::cloud::dialogflow::cx::v3::Flow response;
  auto status = grpc_stub_->CreateFlow(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultFlowsStub::DeleteFlow(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::DeleteFlowRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteFlow(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dialogflow::cx::v3::ListFlowsResponse>
DefaultFlowsStub::ListFlows(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::ListFlowsRequest const& request) {
  google::cloud::dialogflow::cx::v3::ListFlowsResponse response;
  auto status = grpc_stub_->ListFlows(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::Flow> DefaultFlowsStub::GetFlow(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::GetFlowRequest const& request) {
  google::cloud::dialogflow::cx::v3::Flow response;
  auto status = grpc_stub_->GetFlow(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::Flow> DefaultFlowsStub::UpdateFlow(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::UpdateFlowRequest const& request) {
  google::cloud::dialogflow::cx::v3::Flow response;
  auto status = grpc_stub_->UpdateFlow(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFlowsStub::AsyncTrainFlow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::TrainFlowRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncTrainFlow(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
DefaultFlowsStub::ValidateFlow(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::ValidateFlowRequest const& request) {
  google::cloud::dialogflow::cx::v3::FlowValidationResult response;
  auto status = grpc_stub_->ValidateFlow(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>
DefaultFlowsStub::GetFlowValidationResult(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::cx::v3::GetFlowValidationResultRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::FlowValidationResult response;
  auto status =
      grpc_stub_->GetFlowValidationResult(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultFlowsStub::AsyncImportFlow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::ImportFlowRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportFlow(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFlowsStub::AsyncExportFlow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::dialogflow::cx::v3::ExportFlowRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportFlow(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultFlowsStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultFlowsStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
