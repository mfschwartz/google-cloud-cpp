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
// source: google/cloud/dialogflow/v2/document.proto

#include "google/cloud/dialogflow_es/internal/documents_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DocumentsTracingStub::DocumentsTracingStub(std::shared_ptr<DocumentsStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::ListDocumentsResponse>
DocumentsTracingStub::ListDocuments(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListDocumentsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Documents",
                                     "ListDocuments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListDocuments(context, request));
}

StatusOr<google::cloud::dialogflow::v2::Document>
DocumentsTracingStub::GetDocument(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetDocumentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.v2.Documents",
                                     "GetDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetDocument(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DocumentsTracingStub::AsyncCreateDocument(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::CreateDocumentRequest const& request) {
  return child_->AsyncCreateDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsTracingStub::AsyncImportDocuments(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ImportDocumentsRequest const& request) {
  return child_->AsyncImportDocuments(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsTracingStub::AsyncDeleteDocument(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::DeleteDocumentRequest const& request) {
  return child_->AsyncDeleteDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsTracingStub::AsyncUpdateDocument(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::UpdateDocumentRequest const& request) {
  return child_->AsyncUpdateDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsTracingStub::AsyncReloadDocument(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ReloadDocumentRequest const& request) {
  return child_->AsyncReloadDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsTracingStub::AsyncExportDocument(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ExportDocumentRequest const& request) {
  return child_->AsyncExportDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> DocumentsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DocumentsStub> MakeDocumentsTracingStub(
    std::shared_ptr<DocumentsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DocumentsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
