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
// source: google/cloud/vision/v1/product_search_service.proto

#include "google/cloud/vision/v1/internal/product_search_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ProductSearchTracingStub::ProductSearchTracingStub(
    std::shared_ptr<ProductSearchStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchTracingStub::CreateProductSet(
    grpc::ClientContext& context,
    google::cloud::vision::v1::CreateProductSetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "CreateProductSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateProductSet(context, request));
}

StatusOr<google::cloud::vision::v1::ListProductSetsResponse>
ProductSearchTracingStub::ListProductSets(
    grpc::ClientContext& context,
    google::cloud::vision::v1::ListProductSetsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "ListProductSets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProductSets(context, request));
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchTracingStub::GetProductSet(
    grpc::ClientContext& context,
    google::cloud::vision::v1::GetProductSetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "GetProductSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetProductSet(context, request));
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchTracingStub::UpdateProductSet(
    grpc::ClientContext& context,
    google::cloud::vision::v1::UpdateProductSetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "UpdateProductSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateProductSet(context, request));
}

Status ProductSearchTracingStub::DeleteProductSet(
    grpc::ClientContext& context,
    google::cloud::vision::v1::DeleteProductSetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "DeleteProductSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteProductSet(context, request));
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchTracingStub::CreateProduct(
    grpc::ClientContext& context,
    google::cloud::vision::v1::CreateProductRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "CreateProduct");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateProduct(context, request));
}

StatusOr<google::cloud::vision::v1::ListProductsResponse>
ProductSearchTracingStub::ListProducts(
    grpc::ClientContext& context,
    google::cloud::vision::v1::ListProductsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "ListProducts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProducts(context, request));
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchTracingStub::GetProduct(
    grpc::ClientContext& context,
    google::cloud::vision::v1::GetProductRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "GetProduct");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetProduct(context, request));
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchTracingStub::UpdateProduct(
    grpc::ClientContext& context,
    google::cloud::vision::v1::UpdateProductRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "UpdateProduct");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateProduct(context, request));
}

Status ProductSearchTracingStub::DeleteProduct(
    grpc::ClientContext& context,
    google::cloud::vision::v1::DeleteProductRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "DeleteProduct");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteProduct(context, request));
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchTracingStub::CreateReferenceImage(
    grpc::ClientContext& context,
    google::cloud::vision::v1::CreateReferenceImageRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "CreateReferenceImage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateReferenceImage(context, request));
}

Status ProductSearchTracingStub::DeleteReferenceImage(
    grpc::ClientContext& context,
    google::cloud::vision::v1::DeleteReferenceImageRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "DeleteReferenceImage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteReferenceImage(context, request));
}

StatusOr<google::cloud::vision::v1::ListReferenceImagesResponse>
ProductSearchTracingStub::ListReferenceImages(
    grpc::ClientContext& context,
    google::cloud::vision::v1::ListReferenceImagesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "ListReferenceImages");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListReferenceImages(context, request));
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchTracingStub::GetReferenceImage(
    grpc::ClientContext& context,
    google::cloud::vision::v1::GetReferenceImageRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "GetReferenceImage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetReferenceImage(context, request));
}

Status ProductSearchTracingStub::AddProductToProductSet(
    grpc::ClientContext& context,
    google::cloud::vision::v1::AddProductToProductSetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "AddProductToProductSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->AddProductToProductSet(context, request));
}

Status ProductSearchTracingStub::RemoveProductFromProductSet(
    grpc::ClientContext& context,
    google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "RemoveProductFromProductSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->RemoveProductFromProductSet(context, request));
}

StatusOr<google::cloud::vision::v1::ListProductsInProductSetResponse>
ProductSearchTracingStub::ListProductsInProductSet(
    grpc::ClientContext& context,
    google::cloud::vision::v1::ListProductsInProductSetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "ListProductsInProductSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProductsInProductSet(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchTracingStub::AsyncImportProductSets(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vision::v1::ImportProductSetsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "ImportProductSets");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncImportProductSets(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchTracingStub::AsyncPurgeProducts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::vision::v1::PurgeProductsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.vision.v1.ProductSearch",
                                     "PurgeProducts");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncPurgeProducts(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> ProductSearchTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ProductSearchStub> MakeProductSearchTracingStub(
    std::shared_ptr<ProductSearchStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ProductSearchTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
