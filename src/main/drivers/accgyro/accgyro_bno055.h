/*
 * This file is part of INAV.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */
#pragma once

#include "common/vector.h"

typedef struct {
    uint8_t sys;
    uint8_t gyr;
    uint8_t acc;
    uint8_t mag;
} bno055CalibStat_t;

typedef enum {
    ACC = 0,
    MAG = 1,
    GYRO = 2
} bno055Sensor_e;

typedef struct {
    int16_t radius[2];
    int16_t offset[3][3];
} bno055CalibrationData_t;

bool bno055Init(bno055CalibrationData_t calibrationData, bool setCalibration);
fpVector3_t bno055GetEurlerAngles(void);
void bno055FetchEulerAngles(int16_t * buffer);
bno055CalibStat_t bno055GetCalibStat(void);
bno055CalibrationData_t bno055GetCalibrationData(void);
void bno055SetCalibrationData(bno055CalibrationData_t data);