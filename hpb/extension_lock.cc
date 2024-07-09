// Protocol Buffers - Google's data interchange format
// Copyright 2023 Google LLC.  All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#include "google/protobuf/hpb/extension_lock.h"

#include <atomic>

namespace google::protobuf::hpb::internal {

std::atomic<UpbExtensionLocker> upb_extension_locker_global;

}  // namespace protobuf
}  // namespace google::hpb::internal
