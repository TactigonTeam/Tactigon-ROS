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

# OneFinger value
uint8 ONE_FINGER_NONE=0
uint8 ONE_FINGER_SINGLE_TAP=1
uint8 ONE_FINGER_TAP_AND_HOLD=2
uint8 ONE_FINGER_SWIPE_X_NEG=4
uint8 ONE_FINGER_SWIPE_X_POS=8
uint8 ONE_FINGER_SWIPE_Y_POS=16
uint8 ONE_FINGER_SWIPE_Y_NEG=32

# TwoFinger value
uint8 TWO_FINGER_NONE=0
uint8 TWO_FINGER_TAP=1
uint8 TWO_FINGER_SCROLL=2
uint8 TWO_FINGER_ZOOM=4

uint8 one_finger
uint8 two_finger
float32 x_pos
float32 y_pos
