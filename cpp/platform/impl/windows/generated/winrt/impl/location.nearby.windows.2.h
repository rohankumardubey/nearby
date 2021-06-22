// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_location_nearby_windows_2_H
#define WINRT_location_nearby_windows_2_H
#include "winrt/impl/location.nearby.windows.1.h"
WINRT_EXPORT namespace winrt::location::nearby::windows
{
    struct __declspec(empty_bases) BluetoothClassicMedium : winrt::location::nearby::windows::IBluetoothClassicMedium
    {
        BluetoothClassicMedium(std::nullptr_t) noexcept {}
        BluetoothClassicMedium(void* ptr, take_ownership_from_abi_t) noexcept : winrt::location::nearby::windows::IBluetoothClassicMedium(ptr, take_ownership_from_abi) {}
        BluetoothClassicMedium();
        BluetoothClassicMedium(BluetoothClassicMedium const&) noexcept = default;
        BluetoothClassicMedium(BluetoothClassicMedium&&) noexcept = default;
        BluetoothClassicMedium& operator=(BluetoothClassicMedium const&) & noexcept = default;
        BluetoothClassicMedium& operator=(BluetoothClassicMedium&&) & noexcept = default;
    };
}
#endif