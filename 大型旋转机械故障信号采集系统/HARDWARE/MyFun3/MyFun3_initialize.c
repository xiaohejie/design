/*
 * File: MyFun3_initialize.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:53:40
 */

/* Include Files */
#include "MyFun3_initialize.h"
#include "MyFun3.h"
#include "MyFun3_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void MyFun3_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_MyFun3 = true;
}

/*
 * File trailer for MyFun3_initialize.c
 *
 * [EOF]
 */
