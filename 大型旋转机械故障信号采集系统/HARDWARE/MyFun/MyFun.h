/*
 * File: MyFun.h
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:43:09
 */

#ifndef MYFUN_H
#define MYFUN_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "MyFun_types.h"

//¸¨Öúº¯Êý
static float fun_rt_powd_snf(float u0, float u1);
float helper(const float v[1024]);
float helper2(const float v[1024]);

/* Function Declarations */
extern void MyFun( float x[1024], float y[1024]);
extern float funMean(const float v[1024]);
extern float funB_std(const float x[1024]);
extern float funSkewness(const float x[1024]);
extern float funKurtosis(const float x[1024]);
extern float funPeak2Peak(const float v[1024]);
extern float funRMS(const float v[1024]);
extern float funCrestFactor(const float v[1024]);
extern float funShapeFactor(const float v[1024]);
extern float funImpulseFactor(const float v[1024]);
extern float funMarginFactor(const float v[1024]);
extern float funEnergy(const float v[1024]);

#endif

/*
 * File trailer for MyFun.h
 *
 * [EOF]
 */
