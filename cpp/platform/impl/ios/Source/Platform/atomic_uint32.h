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

#ifndef PLATFORM_IMPL_IOS_ATOMIC_UINT32_H_
#define PLATFORM_IMPL_IOS_ATOMIC_UINT32_H_

#include <atomic>
#include <cstdint>

#include "platform/api/atomic_reference.h"

namespace location {
namespace nearby {
namespace ios {

// Concrete AtomicUint32 implementation.
class AtomicUint32 : public api::AtomicUint32 {
 public:
  explicit AtomicUint32(std::uint32_t initial_value) : value_(initial_value) {}
  ~AtomicUint32() override = default;

  AtomicUint32(const AtomicUint32&) = delete;
  AtomicUint32& operator=(const AtomicUint32&) = delete;

  std::uint32_t Get() const override { return value_; }
  void Set(std::uint32_t value) override { value_ = value; }

 private:
  std::atomic<std::uint32_t> value_;
};

}  // namespace ios
}  // namespace nearby
}  // namespace location

#endif  // PLATFORM_IMPL_IOS_ATOMIC_UINT32_H_
