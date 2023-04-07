/*
 * File: fft1.h
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:53:40
 */

#ifndef FFT1_H
#define FFT1_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "MyFun3_types.h"

/* Function Declarations */
extern void bluestein(const float x[1000], const float costab[1025], const
                      float sintab[1025], const float costabinv[1025], const
                      float sintabinv[1025], const creal_T wwc[1999], creal_T
                      y[1000]);

#endif

/*
 * File trailer for fft1.h
 *
 * [EOF]
 */
