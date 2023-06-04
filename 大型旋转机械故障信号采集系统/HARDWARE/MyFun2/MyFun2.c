/*
 * File: MyFun2.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:48:00
 */

/* Include Files */
#include "MyFun2.h"
#include "MyFun2_data.h"
#include "MyFun2_initialize.h"
#include "kurtosis.h"
#include "rt_nonfinite.h"
#include "skewness.h"
#include "std.h"
#include <math.h>

/* Function Definitions */

/*
 * 计算时域特征
 *  x：输入数据
 *      n=length(v);
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
void MyFun2(const float v[1000], float *Mean, float *Std, float *Skewness,
            float *Kurtosis, float *Peak2Peak, float *RMS, float
            *CrestFactor, float *ShapeFactor, float *ImpulseFactor, float
            *MarginFactor, float *Energy)
{
  float y;
  int k;
  boolean_T b;
  int idx;
  boolean_T exitg1;
  float ex;
  float b_ex;
  float x_tmp[1000];
  float b_y[1000];
  if (isInitialized_MyFun2 == false) {
    MyFun2_initialize();
  }

  y = v[0];
  for (k = 0; k < 999; k++) {
    y += v[k + 1];
  }

  *Mean = y / 1000.0;
	printf("2平均值：%f\r\n", *Mean);

  /* 平均值 */
  *Std = b_std(v);

  /* 标准差 */
  *Skewness = skewness(v);

  /* 偏度 */
  *Kurtosis = kurtosis(v);

  /* 峭度 */
  /*      max = max(v);                                                     %最大值 */
  /*      min = min(v);                                                       %最小值 */
  b = rtIsNaN(v[0]);
  if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1001)) {
      if (!rtIsNaN(v[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = v[0];
  } else {
    ex = v[idx - 1];
    idx++;
    for (k = idx; k < 1001; k++) {
      y = v[k - 1];
      if (ex < y) {
        ex = y;
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
      if (!rtIsNaN(v[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    b_ex = v[0];
  } else {
    b_ex = v[idx - 1];
    idx++;
    for (k = idx; k < 1001; k++) {
      y = v[k - 1];
      if (b_ex > y) {
        b_ex = y;
      }
    }
  }

  *Peak2Peak = ex - b_ex;

  /* 峰峰值 */
  for (idx = 0; idx < 1000; idx++) {
    x_tmp[idx] = v[idx] * v[idx];
  }

  y = x_tmp[0];
  for (k = 0; k < 999; k++) {
    y += x_tmp[k + 1];
  }

  *RMS = sqrt(y / 1000.0);

  /* 均方根 */
  if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1001)) {
      if (!rtIsNaN(v[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = v[0];
  } else {
    ex = v[idx - 1];
    idx++;
    for (k = idx; k < 1001; k++) {
      y = v[k - 1];
      if (ex < y) {
        ex = y;
      }
    }
  }

  y = x_tmp[0];
  for (k = 0; k < 999; k++) {
    y += x_tmp[k + 1];
  }

  *CrestFactor = ex / sqrt(y / 1000.0);

  /* 振幅因数 */
  for (k = 0; k < 1000; k++) {
    b_y[k] = fabs(v[k]);
  }

  y = b_y[0];
  for (k = 0; k < 999; k++) {
    y += b_y[k + 1];
  }

  b_ex = y / 1000.0;
  y = x_tmp[0];
  for (k = 0; k < 999; k++) {
    y += x_tmp[k + 1];
  }

  *ShapeFactor = sqrt(y / 1000.0) / b_ex;

  /* 波形因数 */
  *ImpulseFactor = ex / b_ex;

  /* 冲击因数 */
  for (k = 0; k < 1000; k++) {
    b_y[k] = fabs(v[k]);
  }

  y = b_y[0];
  for (k = 0; k < 999; k++) {
    y += b_y[k + 1];
  }

  b_ex = y / 1000.0;
  *MarginFactor = ex / (b_ex * b_ex);

  /* 裕度因数 */
  for (k = 0; k < 1000; k++) {
    x_tmp[k] = v[k] * v[k];
  }

  *Energy = x_tmp[0];
  for (k = 0; k < 999; k++) {
    *Energy += x_tmp[k + 1];
  }

  /* 能量 */
}

/*
 * File trailer for MyFun2.c
 *
 * [EOF]
 */
