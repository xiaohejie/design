/*
 * File: MyFun2_initialize.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:48:00
 */

/* Include Files */
#include "MyFun2_initialize.h"
#include "MyFun2.h"
#include "MyFun2_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void MyFun2_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_MyFun2 = true;
}

/*
 * File trailer for MyFun2_initialize.c
 *
 * [EOF]
 */
