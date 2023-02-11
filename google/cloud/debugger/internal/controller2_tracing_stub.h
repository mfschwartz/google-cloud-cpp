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
// source: google/devtools/clouddebugger/v2/controller.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_CONTROLLER2_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_CONTROLLER2_TRACING_STUB_H

#include "google/cloud/debugger/internal/controller2_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class Controller2TracingStub : public Controller2Stub {
 public:
  ~Controller2TracingStub() override = default;

  explicit Controller2TracingStub(std::shared_ptr<Controller2Stub> child);

  StatusOr<google::devtools::clouddebugger::v2::RegisterDebuggeeResponse>
  RegisterDebuggee(
      grpc::ClientContext& context,
      google::devtools::clouddebugger::v2::RegisterDebuggeeRequest const&
          request) override;

  StatusOr<google::devtools::clouddebugger::v2::ListActiveBreakpointsResponse>
  ListActiveBreakpoints(
      grpc::ClientContext& context,
      google::devtools::clouddebugger::v2::ListActiveBreakpointsRequest const&
          request) override;

  StatusOr<google::devtools::clouddebugger::v2::UpdateActiveBreakpointResponse>
  UpdateActiveBreakpoint(
      grpc::ClientContext& context,
      google::devtools::clouddebugger::v2::UpdateActiveBreakpointRequest const&
          request) override;

 private:
  std::shared_ptr<Controller2Stub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<Controller2Stub> MakeController2TracingStub(
    std::shared_ptr<Controller2Stub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_CONTROLLER2_TRACING_STUB_H
