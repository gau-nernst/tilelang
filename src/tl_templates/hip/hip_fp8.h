// Copyright (c) Tile-AI Corporation.
// Licensed under the MIT License.
#pragma once

#include <hip/hip_fp8.h>

using fp8_e4_t = __hip_fp8_e4m3_fnuz;
struct fp8_e4_2_t {
  fp8_e4_t data[2];
};
struct fp8_e4_4_t {
  fp8_e4_t data[4];
};
struct fp8_e4_8_t {
  fp8_e4_t data[8];
};
struct fp8_e4_16_t {
  fp8_e4_t data[16];
};
using fp8_e5_t = __hip_fp8_e5m2_fnuz;
struct fp8_e5_2_t {
  fp8_e5_t data[2];
};
struct fp8_e5_4_t {
  fp8_e5_t data[4];
};
struct fp8_e5_8_t {
  fp8_e5_t data[8];
};
struct fp8_e5_16_t {
  fp8_e5_t data[16];
};
