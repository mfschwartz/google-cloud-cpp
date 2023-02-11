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
// source: google/cloud/eventarc/publishing/v1/publisher.proto

#include "google/cloud/eventarc/internal/publisher_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace eventarc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PublisherTracingStub::PublisherTracingStub(std::shared_ptr<PublisherStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::eventarc::publishing::v1::
             PublishChannelConnectionEventsResponse>
PublisherTracingStub::PublishChannelConnectionEvents(
    grpc::ClientContext& context,
    google::cloud::eventarc::publishing::v1::
        PublishChannelConnectionEventsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.eventarc.publishing.v1.Publisher",
                             "PublishChannelConnectionEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->PublishChannelConnectionEvents(context, request));
}

StatusOr<google::cloud::eventarc::publishing::v1::PublishEventsResponse>
PublisherTracingStub::PublishEvents(
    grpc::ClientContext& context,
    google::cloud::eventarc::publishing::v1::PublishEventsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.eventarc.publishing.v1.Publisher", "PublishEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->PublishEvents(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<PublisherStub> MakePublisherTracingStub(
    std::shared_ptr<PublisherStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<PublisherTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_internal
}  // namespace cloud
}  // namespace google
