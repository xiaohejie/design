/*
 * File: kurtosis.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:48:00
 */

/* Include Files */
#include "kurtosis.h"
#include "MyFun2.h"
#include "rt_nonfinite.h"

/* Function Definitions */

/*
 * Arguments    : const float x[1000]
 * Return Type  : float
 */
float kurtosis(const float x[1000])
{
  float m4;
  int c;
  int b_k;
  float s2;
  float d;
  float x0[1000];
  m4 = 0.0;
  c = 0;
  for (b_k = 0; b_k < 1000; b_k++) {
    if (!rtIsNaN(x[b_k])) {
      m4 += x[b_k];
      c++;
    }
  }

  if (c == 0) {
    m4 = rtNaN;
  } else {
    m4 /= (float)c;
  }

  s2 = 0.0;
  c = 0;
  for (b_k = 0; b_k < 1000; b_k++) {
    d = x[b_k] - m4;
    d *= d;
    x0[b_k] = d;
    if (!rtIsNaN(d)) {
      s2 += d;
      c++;
    }
  }

  if (c == 0) {
    s2 = rtNaN;
  } else {
    s2 /= (float)c;
  }

  m4 = 0.0;
  c = 0;
  for (b_k = 0; b_k < 1000; b_k++) {
    d = x0[b_k] * x0[b_k];
    x0[b_k] = d;
    if (!rtIsNaN(d)) {
      m4 += d;
      c++;
    }
  }

  if (c == 0) {
    m4 = rtNaN;
  } else {
    m4 /= (float)c;
  }

  return m4 / (s2 * s2);
}

/*
 * File trailer for kurtosis.c
 *
 * [EOF]
 */
