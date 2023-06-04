/*
 * File: kurtosis.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:53:40
 */

/* Include Files */
#include "kurtosis.h"
#include "MyFun3.h"
#include "rt_nonfinite.h"

/* Function Definitions */

/*
 * Arguments    : const double x[1000]
 * Return Type  : double
 */
double kurtosis(const double x[1000])
{
  double m4;
  int c;
  int b_k;
  double s2;
  double d;
  double x0[1000];
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
    m4 /= (double)c;
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
    s2 /= (double)c;
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
    m4 /= (double)c;
  }

  return m4 / (s2 * s2);
}

/*
 * File trailer for kurtosis.c
 *
 * [EOF]
 */
