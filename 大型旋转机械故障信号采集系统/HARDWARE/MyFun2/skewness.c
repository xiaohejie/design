/*
 * File: skewness.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:48:00
 */

/* Include Files */
#include "skewness.h"
#include "MyFun2.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static float rt_powd_snf(float u0, float u1);

/* Function Definitions */

/*
 * Arguments    : float u0
 *                float u1
 * Return Type  : float
 */
static float rt_powd_snf(float u0, float u1)
{
  float y;
  float d;
  float d1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d = fabs(u0);
    d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d == 1.0) {
        y = 1.0;
      } else if (d > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Arguments    : const float x[1000]
 * Return Type  : float
 */
float skewness(const float x[1000])
{
  float m1;
  int c;
  int k;
  float s2;
  float d;
  float x0[1000];
  float xp[1000];
  m1 = 0.0;
  c = 0;
  for (k = 0; k < 1000; k++) {
    if (!rtIsNaN(x[k])) {
      m1 += x[k];
      c++;
    }
  }

  if (c == 0) {
    m1 = rtNaN;
  } else {
    m1 /= (float)c;
  }

  s2 = 0.0;
  c = 0;
  for (k = 0; k < 1000; k++) {
    d = x[k] - m1;
    x0[k] = d;
    d *= d;
    xp[k] = d;
    if (!rtIsNaN(d)) {
      s2 += d;
      c++;
    }
  }

  if (c == 0) {
    m1 = rtNaN;
  } else {
    m1 = s2 / (float)c;
  }

  s2 = 0.0;
  c = 0;
  for (k = 0; k < 1000; k++) {
    d = xp[k] * x0[k];
    xp[k] = d;
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

  return s2 / rt_powd_snf(m1, 1.5);
}

/*
 * File trailer for skewness.c
 *
 * [EOF]
 */
