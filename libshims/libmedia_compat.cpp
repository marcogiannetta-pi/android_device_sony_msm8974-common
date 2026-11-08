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

#include <utils/String8.h>
#include <system/audio.h>

namespace android {

class AudioSystem {
public:
    static status_t setParameters(audio_io_handle_t ioHandle, const String8& keyValuePairs);
    static String8 getParameters(audio_io_handle_t ioHandle, const String8& keys);
    static void setErrorCallback(void (*cb)(status_t err));
};

status_t AudioSystem::setParameters(audio_io_handle_t, const String8&) {
    return 0;
}

String8 AudioSystem::getParameters(audio_io_handle_t, const String8&) {
    return String8("");
}

void AudioSystem::setErrorCallback(void (*)(status_t)) {
}

} // namespace android
