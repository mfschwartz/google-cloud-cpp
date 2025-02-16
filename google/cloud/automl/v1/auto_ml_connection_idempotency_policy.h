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
// source: google/cloud/automl/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_AUTO_ML_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_AUTO_ML_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/automl/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace automl_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AutoMlConnectionIdempotencyPolicy {
 public:
  virtual ~AutoMlConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AutoMlConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency CreateDataset(
      google::cloud::automl::v1::CreateDatasetRequest const& request);

  virtual google::cloud::Idempotency GetDataset(
      google::cloud::automl::v1::GetDatasetRequest const& request);

  virtual google::cloud::Idempotency ListDatasets(
      google::cloud::automl::v1::ListDatasetsRequest request);

  virtual google::cloud::Idempotency UpdateDataset(
      google::cloud::automl::v1::UpdateDatasetRequest const& request);

  virtual google::cloud::Idempotency DeleteDataset(
      google::cloud::automl::v1::DeleteDatasetRequest const& request);

  virtual google::cloud::Idempotency ImportData(
      google::cloud::automl::v1::ImportDataRequest const& request);

  virtual google::cloud::Idempotency ExportData(
      google::cloud::automl::v1::ExportDataRequest const& request);

  virtual google::cloud::Idempotency GetAnnotationSpec(
      google::cloud::automl::v1::GetAnnotationSpecRequest const& request);

  virtual google::cloud::Idempotency CreateModel(
      google::cloud::automl::v1::CreateModelRequest const& request);

  virtual google::cloud::Idempotency GetModel(
      google::cloud::automl::v1::GetModelRequest const& request);

  virtual google::cloud::Idempotency ListModels(
      google::cloud::automl::v1::ListModelsRequest request);

  virtual google::cloud::Idempotency DeleteModel(
      google::cloud::automl::v1::DeleteModelRequest const& request);

  virtual google::cloud::Idempotency UpdateModel(
      google::cloud::automl::v1::UpdateModelRequest const& request);

  virtual google::cloud::Idempotency DeployModel(
      google::cloud::automl::v1::DeployModelRequest const& request);

  virtual google::cloud::Idempotency UndeployModel(
      google::cloud::automl::v1::UndeployModelRequest const& request);

  virtual google::cloud::Idempotency ExportModel(
      google::cloud::automl::v1::ExportModelRequest const& request);

  virtual google::cloud::Idempotency GetModelEvaluation(
      google::cloud::automl::v1::GetModelEvaluationRequest const& request);

  virtual google::cloud::Idempotency ListModelEvaluations(
      google::cloud::automl::v1::ListModelEvaluationsRequest request);
};

std::unique_ptr<AutoMlConnectionIdempotencyPolicy>
MakeDefaultAutoMlConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_AUTO_ML_CONNECTION_IDEMPOTENCY_POLICY_H
