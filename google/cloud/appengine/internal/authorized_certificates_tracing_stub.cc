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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/internal/authorized_certificates_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AuthorizedCertificatesTracingStub::AuthorizedCertificatesTracingStub(
    std::shared_ptr<AuthorizedCertificatesStub> child)
    : child_(std::move(child)) {}

StatusOr<google::appengine::v1::ListAuthorizedCertificatesResponse>
AuthorizedCertificatesTracingStub::ListAuthorizedCertificates(
    grpc::ClientContext& context,
    google::appengine::v1::ListAuthorizedCertificatesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.AuthorizedCertificates",
                             "ListAuthorizedCertificates");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->ListAuthorizedCertificates(context, request));
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesTracingStub::GetAuthorizedCertificate(
    grpc::ClientContext& context,
    google::appengine::v1::GetAuthorizedCertificateRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.appengine.v1.AuthorizedCertificates", "GetAuthorizedCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetAuthorizedCertificate(context, request));
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesTracingStub::CreateAuthorizedCertificate(
    grpc::ClientContext& context,
    google::appengine::v1::CreateAuthorizedCertificateRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.AuthorizedCertificates",
                             "CreateAuthorizedCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->CreateAuthorizedCertificate(context, request));
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesTracingStub::UpdateAuthorizedCertificate(
    grpc::ClientContext& context,
    google::appengine::v1::UpdateAuthorizedCertificateRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.AuthorizedCertificates",
                             "UpdateAuthorizedCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->UpdateAuthorizedCertificate(context, request));
}

Status AuthorizedCertificatesTracingStub::DeleteAuthorizedCertificate(
    grpc::ClientContext& context,
    google::appengine::v1::DeleteAuthorizedCertificateRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.AuthorizedCertificates",
                             "DeleteAuthorizedCertificate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->DeleteAuthorizedCertificate(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AuthorizedCertificatesStub>
MakeAuthorizedCertificatesTracingStub(
    std::shared_ptr<AuthorizedCertificatesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AuthorizedCertificatesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
