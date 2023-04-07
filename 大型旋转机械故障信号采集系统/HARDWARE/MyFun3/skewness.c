/*
 * File: skewness.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:53:40
 */

/* Include Files */
#include "skewness.h"
#include "MyFun3.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double rt_powd_snf(double u0, double u1);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d;
  double d1;
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
 * Arguments    : const double x[1000]
 * Return Type  : double
 */
double skewness(const double x[1000])
{
  double m1;
  int c;
  int k;
  double s2;
  double d;
  double x0[1000];
  double xp[1000];
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
    m1 /= (double)c;
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
    m1 = s2 / (double)c;
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
    s2 /= (double)c;
  }

  return s2 / rt_powd_snf(m1, 1.5);
}

/*
 * File trailer for skewness.c
 *
 * [EOF]
 */
