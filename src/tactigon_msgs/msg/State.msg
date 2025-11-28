#********************************************************************************
# Copyright (c) 2025 Next Industries s.r.l.
#
# This program and the accompanying materials are made available under the
# terms of the Apache 2.0 which is available at http://www.apache.org/licenses/LICENSE-2.0
#
# SPDX-License-Identifier: Apache-2.0
#
# Contributors:
# Massimiliano Bellino
# Stefano Barbareschi
#********************************************************************************

# Selector values
# This describe the BLE data stream from the Tactigon Skin
uint8 BLE_SELECTOR_NONE=0
uint8 BLE_SELECTOR_SENSORS=1
uint8 BLE_SELECTOR_AUDIO=2

bool connected
float32 battery
uint8 selector
Touch touchpad
Angle angle
Gesture gesture