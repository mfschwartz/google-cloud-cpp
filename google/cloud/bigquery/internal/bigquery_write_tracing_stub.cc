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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/internal/bigquery_write_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BigQueryWriteTracingStub::BigQueryWriteTracingStub(
    std::shared_ptr<BigQueryWriteStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteTracingStub::CreateWriteStream(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.storage.v1.BigQueryWrite", "CreateWriteStream");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateWriteStream(context, request));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::bigquery::storage::v1::AppendRowsRequest,
    google::cloud::bigquery::storage::v1::AppendRowsResponse>>
BigQueryWriteTracingStub::AsyncAppendRows(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context) {
  return child_->AsyncAppendRows(cq, std::move(context));
}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteTracingStub::GetWriteStream(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.storage.v1.BigQueryWrite", "GetWriteStream");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetWriteStream(context, request));
}

StatusOr<google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
BigQueryWriteTracingStub::FinalizeWriteStream(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.storage.v1.BigQueryWrite", "FinalizeWriteStream");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->FinalizeWriteStream(context, request));
}

StatusOr<google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
BigQueryWriteTracingStub::BatchCommitWriteStreams(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.bigquery.storage.v1.BigQueryWrite",
                             "BatchCommitWriteStreams");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->BatchCommitWriteStreams(context, request));
}

StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse>
BigQueryWriteTracingStub::FlushRows(
    grpc::ClientContext& context,
    google::cloud::bigquery::storage::v1::FlushRowsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.bigquery.storage.v1.BigQueryWrite", "FlushRows");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->FlushRows(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<BigQueryWriteStub> MakeBigQueryWriteTracingStub(
    std::shared_ptr<BigQueryWriteStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BigQueryWriteTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
