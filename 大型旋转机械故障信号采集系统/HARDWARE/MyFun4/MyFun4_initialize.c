/*
 * File: MyFun4_initialize.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 25-Sep-2022 20:58:03
 */

/* Include Files */
#include "MyFun4_initialize.h"
#include "MyFun4.h"
#include "MyFun4_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void MyFun4_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_MyFun4 = true;
}

/*
 * File trailer for MyFun4_initialize.c
 *
 * [EOF]
 */
