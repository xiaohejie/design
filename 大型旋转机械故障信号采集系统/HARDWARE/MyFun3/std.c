/*
 * File: std.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:53:40
 */

/* Include Files */
#include "std.h"
#include "MyFun3.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */

/*
 * Arguments    : const double x[1000]
 * Return Type  : double
 */
double b_std(const double x[1000])
{
  double y;
  double xbar;
  int k;
  double scale;
  double d;
  double t;
  xbar = x[0];
  for (k = 0; k < 999; k++) {
    xbar += x[k + 1];
  }

  xbar /= 1000.0;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 1000; k++) {
    d = fabs(x[k] - xbar);
    if (d > scale) {
      t = scale / d;
      y = y * t * t + 1.0;
      scale = d;
    } else {
      t = d / scale;
      y += t * t;
    }
  }

  y = scale * sqrt(y);
  y /= 31.606961258558215;
  return y;
}

/*
 * File trailer for std.c
 *
 * [EOF]
 */
