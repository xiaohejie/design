/*
 * File: MyFun3.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:53:40
 */

/* Include Files */
#include "MyFun3.h"
#include "MyFun3_data.h"
#include "MyFun3_initialize.h"
#include "fft.h"
#include "kurtosis.h"
#include "rt_nonfinite.h"
#include "skewness.h"
#include "std.h"
#include <math.h>

/* Function Declarations */
static float rt_hypotd_snf(float u0, float u1);

/* Function Definitions */

/*
 * Arguments    : float u0
 *                float u1
 * Return Type  : float
 */
static float rt_hypotd_snf(float u0, float u1)
{
  float y;
  float a;
  a = fabs(u0);
  y = fabs(u1);
  if (a < y) {
    a /= y;
    y *= sqrt(a * a + 1.0);
  } else if (a > y) {
    y /= a;
    y = a * sqrt(y * y + 1.0);
  } else {
    if (!rtIsNaN(y)) {
      y = a * 1.4142135623730951;
    }
  }

  return y;
}

/*
 * 计算频域特征
 *  x：输入数据
 * Arguments    : const float v[1000]
 *                float *Mean
 *                float *Std
 *                float *Skewness
 *                float *Kurtosis
 *                float *Peak2Peak
 *                float *RMS
 *                float *CrestFactor
 *                float *ShapeFactor
 *                float *ImpulseFactor
 *                float *MarginFactor
 *                float *Energy
 * Return Type  : void
 */
void MyFun3(const float v[1000], float *Mean, float *Std, float *Skewness,
            float *Kurtosis, float *Peak2Peak, float *RMS, float
            *CrestFactor, float *ShapeFactor, float *ImpulseFactor, float
            *MarginFactor, float *Energy)
{
  creal_T z[1000];
  int k;
  float im;
  float v_fftz[1000];
  float re;
  boolean_T b;
  int idx;
  boolean_T exitg1;
  float ex;
  float x_tmp[1000];
  if (isInitialized_MyFun3 == false) {
    MyFun3_initialize();
  }

  /* 长度 */
  fft(v, z);
  for (k = 0; k < 1000; k++) {
    if (z[k].im == 0.0) {
      re = z[k].re / 500.0;
      im = 0.0;
    } else if (z[k].re == 0.0) {
      re = 0.0;
      im = z[k].im / 500.0;
    } else {
      re = z[k].re / 500.0;
      im = z[k].im / 500.0;
    }

    z[k].re = re;
    z[k].im = im;
    v_fftz[k] = rt_hypotd_snf(re, im);
  }

  im = v_fftz[0];
  for (k = 0; k < 999; k++) {
    im += v_fftz[k + 1];
  }

  *Mean = im / 1000.0;

  /* 平均值 */
  *Std = b_std(v_fftz);

  /* 标准差 */
  *Skewness = skewness(v_fftz);

  /* 偏度 */
  *Kurtosis = kurtosis(v_fftz);

  /* 峭度 */
  /*      max = max(v_fftz);                                                     %最大值 */
  /*      min = min(v_fftz);                                                       %最小值 */
  b = rtIsNaN(v_fftz[0]);
  if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1001)) {
      if (!rtIsNaN(v_fftz[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = v_fftz[0];
  } else {
    ex = v_fftz[idx - 1];
    idx++;
    for (k = idx; k < 1001; k++) {
      im = v_fftz[k - 1];
      if (ex < im) {
        ex = im;
      }
    }
  }

  if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1001)) {
      if (!rtIsNaN(v_fftz[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    re = v_fftz[0];
  } else {
    re = v_fftz[idx - 1];
    idx++;
    for (k = idx; k < 1001; k++) {
      im = v_fftz[k - 1];
      if (re > im) {
        re = im;
      }
    }
  }

  *Peak2Peak = ex - re;

  /* 峰峰值 */
  for (idx = 0; idx < 1000; idx++) {
    x_tmp[idx] = v_fftz[idx] * v_fftz[idx];
  }

  im = x_tmp[0];
  for (k = 0; k < 999; k++) {
    im += x_tmp[k + 1];
  }

  *RMS = sqrt(im / 1000.0);

  /* 均方根 */
  if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1001)) {
      if (!rtIsNaN(v_fftz[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = v_fftz[0];
  } else {
    ex = v_fftz[idx - 1];
    idx++;
    for (k = idx; k < 1001; k++) {
      im = v_fftz[k - 1];
      if (ex < im) {
        ex = im;
      }
    }
  }

  im = x_tmp[0];
  for (k = 0; k < 999; k++) {
    im += x_tmp[k + 1];
  }

  *CrestFactor = ex / sqrt(im / 1000.0);

  /* 振幅因数 */
  im = v_fftz[0];
  for (k = 0; k < 999; k++) {
    im += v_fftz[k + 1];
  }

  re = im / 1000.0;
  im = x_tmp[0];
  for (k = 0; k < 999; k++) {
    im += x_tmp[k + 1];
  }

  *ShapeFactor = sqrt(im / 1000.0) / re;

  /* 波形因数 */
  *ImpulseFactor = ex / re;

  /* 冲击因数 */
  im = v_fftz[0];
  for (k = 0; k < 999; k++) {
    im += v_fftz[k + 1];
  }

  re = im / 1000.0;
  *MarginFactor = ex / (re * re);

  /* 裕度因数 */
  for (k = 0; k < 1000; k++) {
    x_tmp[k] = v_fftz[k] * v_fftz[k];
  }

  *Energy = x_tmp[0];
  for (k = 0; k < 999; k++) {
    *Energy += x_tmp[k + 1];
  }

  /* 能量 */
}

/*
 * File trailer for MyFun3.c
 *
 * [EOF]
 */
