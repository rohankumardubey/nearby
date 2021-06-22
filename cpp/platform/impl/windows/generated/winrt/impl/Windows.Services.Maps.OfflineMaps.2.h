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

#ifndef WINRT_Windows_Services_Maps_OfflineMaps_2_H
#define WINRT_Windows_Services_Maps_OfflineMaps_2_H
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Services.Maps.OfflineMaps.1.h"
WINRT_EXPORT namespace winrt::Windows::Services::Maps::OfflineMaps
{
    struct __declspec(empty_bases) OfflineMapPackage : winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage
    {
        OfflineMapPackage(std::nullptr_t) noexcept {}
        OfflineMapPackage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage(ptr, take_ownership_from_abi) {}
        OfflineMapPackage(OfflineMapPackage const&) noexcept = default;
        OfflineMapPackage(OfflineMapPackage&&) noexcept = default;
        OfflineMapPackage& operator=(OfflineMapPackage const&) & noexcept = default;
        OfflineMapPackage& operator=(OfflineMapPackage&&) & noexcept = default;
        static auto FindPackagesAsync(winrt::Windows::Devices::Geolocation::Geopoint const& queryPoint);
        static auto FindPackagesInBoundingBoxAsync(winrt::Windows::Devices::Geolocation::GeoboundingBox const& queryBoundingBox);
        static auto FindPackagesInGeocircleAsync(winrt::Windows::Devices::Geolocation::Geocircle const& queryCircle);
    };
    struct __declspec(empty_bases) OfflineMapPackageQueryResult : winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult
    {
        OfflineMapPackageQueryResult(std::nullptr_t) noexcept {}
        OfflineMapPackageQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult(ptr, take_ownership_from_abi) {}
        OfflineMapPackageQueryResult(OfflineMapPackageQueryResult const&) noexcept = default;
        OfflineMapPackageQueryResult(OfflineMapPackageQueryResult&&) noexcept = default;
        OfflineMapPackageQueryResult& operator=(OfflineMapPackageQueryResult const&) & noexcept = default;
        OfflineMapPackageQueryResult& operator=(OfflineMapPackageQueryResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) OfflineMapPackageStartDownloadResult : winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult
    {
        OfflineMapPackageStartDownloadResult(std::nullptr_t) noexcept {}
        OfflineMapPackageStartDownloadResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult(ptr, take_ownership_from_abi) {}
        OfflineMapPackageStartDownloadResult(OfflineMapPackageStartDownloadResult const&) noexcept = default;
        OfflineMapPackageStartDownloadResult(OfflineMapPackageStartDownloadResult&&) noexcept = default;
        OfflineMapPackageStartDownloadResult& operator=(OfflineMapPackageStartDownloadResult const&) & noexcept = default;
        OfflineMapPackageStartDownloadResult& operator=(OfflineMapPackageStartDownloadResult&&) & noexcept = default;
    };
}
#endif