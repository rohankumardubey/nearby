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

#ifndef WINRT_Windows_Globalization_PhoneNumberFormatting_1_H
#define WINRT_Windows_Globalization_PhoneNumberFormatting_1_H
#include "winrt/impl/Windows.Globalization.PhoneNumberFormatting.0.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::PhoneNumberFormatting
{
    struct __declspec(empty_bases) IPhoneNumberFormatter :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneNumberFormatter>
    {
        IPhoneNumberFormatter(std::nullptr_t = nullptr) noexcept {}
        IPhoneNumberFormatter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPhoneNumberFormatter(IPhoneNumberFormatter const&) noexcept = default;
        IPhoneNumberFormatter(IPhoneNumberFormatter&&) noexcept = default;
        IPhoneNumberFormatter& operator=(IPhoneNumberFormatter const&) & noexcept = default;
        IPhoneNumberFormatter& operator=(IPhoneNumberFormatter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPhoneNumberFormatterStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneNumberFormatterStatics>
    {
        IPhoneNumberFormatterStatics(std::nullptr_t = nullptr) noexcept {}
        IPhoneNumberFormatterStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPhoneNumberFormatterStatics(IPhoneNumberFormatterStatics const&) noexcept = default;
        IPhoneNumberFormatterStatics(IPhoneNumberFormatterStatics&&) noexcept = default;
        IPhoneNumberFormatterStatics& operator=(IPhoneNumberFormatterStatics const&) & noexcept = default;
        IPhoneNumberFormatterStatics& operator=(IPhoneNumberFormatterStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPhoneNumberInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneNumberInfo>
    {
        IPhoneNumberInfo(std::nullptr_t = nullptr) noexcept {}
        IPhoneNumberInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPhoneNumberInfo(IPhoneNumberInfo const&) noexcept = default;
        IPhoneNumberInfo(IPhoneNumberInfo&&) noexcept = default;
        IPhoneNumberInfo& operator=(IPhoneNumberInfo const&) & noexcept = default;
        IPhoneNumberInfo& operator=(IPhoneNumberInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPhoneNumberInfoFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneNumberInfoFactory>
    {
        IPhoneNumberInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IPhoneNumberInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPhoneNumberInfoFactory(IPhoneNumberInfoFactory const&) noexcept = default;
        IPhoneNumberInfoFactory(IPhoneNumberInfoFactory&&) noexcept = default;
        IPhoneNumberInfoFactory& operator=(IPhoneNumberInfoFactory const&) & noexcept = default;
        IPhoneNumberInfoFactory& operator=(IPhoneNumberInfoFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPhoneNumberInfoStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneNumberInfoStatics>
    {
        IPhoneNumberInfoStatics(std::nullptr_t = nullptr) noexcept {}
        IPhoneNumberInfoStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPhoneNumberInfoStatics(IPhoneNumberInfoStatics const&) noexcept = default;
        IPhoneNumberInfoStatics(IPhoneNumberInfoStatics&&) noexcept = default;
        IPhoneNumberInfoStatics& operator=(IPhoneNumberInfoStatics const&) & noexcept = default;
        IPhoneNumberInfoStatics& operator=(IPhoneNumberInfoStatics&&) & noexcept = default;
    };
}
#endif