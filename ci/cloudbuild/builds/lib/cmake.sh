#!/bin/bash
#
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This bash library has various helper functions for our cmake-based builds.

# Make our include guard clean against set -o nounset.
test -n "${CI_CLOUDBUILD_BUILDS_LIB_CMAKE_SH__:-}" || declare -i CI_CLOUDBUILD_BUILDS_LIB_CMAKE_SH__=0
if ((CI_CLOUDBUILD_BUILDS_LIB_CMAKE_SH__++ != 0)); then
  return 0
fi # include guard

source module ci/cloudbuild/builds/lib/features.sh
source module ci/lib/io.sh

io::log "Using CMake version"
cmake --version

# Adds an elapsed seconds counter at the beginning of the ninja output to help
# us see where builds are taking the most time. See also
# https://ninja-build.org/manual.html#_environment_variables
export NINJA_STATUS="T+%es [%f/%t] "

# This block is run the first (and only) time this script is sourced. It first
# clears the ccache stats. Then it registers an exit handler that will display
# the ccache stats when the calling script exits.
if command -v ccache >/dev/null 2>&1; then
  io::log "Clearing ccache stats"
  ccache --zero-stats
  function show_stats_handler() {
    if [[ "${TRIGGER_TYPE:-}" != "manual" || "${VERBOSE_FLAG:-}" == "true" ]]; then
      io::log "===> ccache stats"
      ccache --show-stats
    fi
  }
  trap show_stats_handler EXIT
fi

function cmake::common_args() {
  local args
  args=(
    -DGOOGLE_CLOUD_CPP_ENABLE_CCACHE=ON
    -DGOOGLE_CLOUD_CPP_ENABLE_WERROR=ON
    -GNinja
    -S .
    -B cmake-out
  )
  printf "%s\n" "${args[@]}"
}

function ctest::common_args() {
  local args
  args=(
    # Print the full output on failures
    --output-on-failure
    # Run many tests in parallel, use -j for compatibility with old versions
    -j "$(nproc)"
    # Make the output shorter on interactive tests
    --progress
  )
  printf "%s\n" "${args[@]}"
}
