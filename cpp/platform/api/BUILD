# Copyright 2020 Google LLC
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
licenses(["notice"])

cc_library(
    name = "types",
    hdrs = [
        "atomic_boolean.h",
        "atomic_reference.h",
        "bluetooth_adapter.h",
        "cancelable.h",
        "condition_variable.h",
        "count_down_latch.h",
        "crypto.h",
        "executor.h",
        "future.h",
        "input_file.h",
        "listenable_future.h",
        "log_message.h",
        "mutex.h",
        "output_file.h",
        "scheduled_executor.h",
        "settable_future.h",
        "submittable_executor.h",
        "system_clock.h",
    ],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = [
        "//platform/base:__pkg__",
        "//platform/impl:__subpackages__",
        "//platform/public:__pkg__",
    ],
    deps = [
        "//absl/base:core_headers",
        "//absl/strings",
        "//absl/time",
        "//platform/base",
    ],
)

cc_library(
    name = "comm",
    hdrs = [
        "ble.h",
        "ble_v2.h",
        "bluetooth_adapter.h",
        "bluetooth_classic.h",
        "server_sync.h",
        "webrtc.h",
        "wifi.h",
        "wifi_lan.h",
    ],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = [
        "//core/internal:__subpackages__",
        "//platform/base:__pkg__",
        "//platform/impl:__subpackages__",
        "//platform/public:__pkg__",
    ],
    deps = [
        "//absl/strings",
        "//absl/types:optional",
        "//platform/base",
        "//platform/base:cancellation_flag",
        "//proto/connections:offline_wire_formats_portable_proto",
        "//webrtc/api:libjingle_peerconnection_api",
    ],
)

cc_library(
    name = "platform",
    hdrs = [
        "platform.h",
    ],
    compatible_with = ["//buildenv/target:non_prod"],
    visibility = [
        "//googlemac/iPhone/Shared/Nearby/Connections:__subpackages__",
        "//platform/base:__pkg__",
        "//platform/impl:__subpackages__",
        "//platform/public:__pkg__",
    ],
    deps = [
        ":comm",
        ":types",
        "//absl/strings",
        "//platform/base",
    ],
)
