/*
 * Copyright (C) 2026 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <utils/Errors.h>
#include <utils/String8.h>

#define EXPORT __attribute__((visibility("default")))

namespace android {

class AudioSystem {
public:
    EXPORT static String8 getParameters(int ioHandle, const String8& keys);
    EXPORT static status_t setParameters(int ioHandle, const String8& keyValuePairs);
    EXPORT static void setErrorCallback(void (*cb)(int));
};

String8 AudioSystem::getParameters(int /*ioHandle*/, const String8& /*keys*/) {
    return String8("");
}

status_t AudioSystem::setParameters(int /*ioHandle*/, const String8& /*keyValuePairs*/) {
    return OK;
}

void AudioSystem::setErrorCallback(void (*/*cb*/)(int)) {
}

} // namespace android
