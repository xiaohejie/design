/*
 * File: fft1.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:53:40
 */

/* Include Files */
#include "fft1.h"
#include "MyFun3.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void b_r2br_r2dit_trig(const creal_T x[2048], const float costab[1025],
  const float sintab[1025], creal_T y[2048]);
static void r2br_r2dit_trig(const creal_T x[1999], const float costab[1025],
  const float sintab[1025], creal_T y[2048]);
static void r2br_r2dit_trig_impl(const creal_T x[1000], const float costab[1025],
  const float sintab[1025], creal_T y[2048]);

/* Function Definitions */

/*
 * Arguments    : const creal_T x[2048]
 *                const float costab[1025]
 *                const float sintab[1025]
 *                creal_T y[2048]
 * Return Type  : void
 */
static void b_r2br_r2dit_trig(const creal_T x[2048], const float costab[1025],
  const float sintab[1025], creal_T y[2048])
{
  int ix;
  int ju;
  int iy;
  int i;
  boolean_T tst;
  float twid_re;
  float temp_re;
  float twid_im;
  int iheight;
  float temp_im;
  float re;
  float im;
  int istart;
  int temp_re_tmp;
  int j;
  int ihi;
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 2047; i++) {
    y[iy] = x[ix];
    iy = 2048;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }

    iy = ju;
    ix++;
  }

  y[iy] = x[ix];
  for (i = 0; i <= 2046; i += 2) {
    twid_re = y[i + 1].re;
    temp_re = twid_re;
    twid_im = y[i + 1].im;
    temp_im = twid_im;
    re = y[i].re;
    im = y[i].im;
    twid_re = y[i].re - twid_re;
    y[i + 1].re = twid_re;
    twid_im = y[i].im - twid_im;
    y[i + 1].im = twid_im;
    y[i].re = re + temp_re;
    y[i].im = im + temp_im;
  }

  iy = 2;
  ix = 4;
  ju = 512;
  iheight = 2045;
  while (ju > 0) {
    for (i = 0; i < iheight; i += ix) {
      temp_re_tmp = i + iy;
      temp_re = y[temp_re_tmp].re;
      temp_im = y[temp_re_tmp].im;
      y[temp_re_tmp].re = y[i].re - y[temp_re_tmp].re;
      y[temp_re_tmp].im = y[i].im - y[temp_re_tmp].im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }

    istart = 1;
    for (j = ju; j < 1024; j += ju) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        temp_re_tmp = i + iy;
        temp_re = twid_re * y[temp_re_tmp].re - twid_im * y[temp_re_tmp].im;
        temp_im = twid_re * y[temp_re_tmp].im + twid_im * y[temp_re_tmp].re;
        y[temp_re_tmp].re = y[i].re - temp_re;
        y[temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ix;
      }

      istart++;
    }

    ju /= 2;
    iy = ix;
    ix += ix;
    iheight -= iy;
  }

  for (iy = 0; iy < 2048; iy++) {
    y[iy].re *= 0.00048828125;
    y[iy].im *= 0.00048828125;
  }
}

/*
 * Arguments    : const creal_T x[1999]
 *                const float costab[1025]
 *                const float sintab[1025]
 *                creal_T y[2048]
 * Return Type  : void
 */
static void r2br_r2dit_trig(const creal_T x[1999], const float costab[1025],
  const float sintab[1025], creal_T y[2048])
{
  int ix;
  int ju;
  int iy;
  int i;
  boolean_T tst;
  float twid_re;
  float temp_re;
  float twid_im;
  int iheight;
  float temp_im;
  float re;
  float im;
  int istart;
  int temp_re_tmp;
  int j;
  int ihi;
  memset(&y[0], 0, 2048U * sizeof(creal_T));
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 1998; i++) {
    y[iy] = x[ix];
    iy = 2048;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }

    iy = ju;
    ix++;
  }

  y[iy] = x[ix];
  for (i = 0; i <= 2046; i += 2) {
    twid_re = y[i + 1].re;
    temp_re = twid_re;
    twid_im = y[i + 1].im;
    temp_im = twid_im;
    re = y[i].re;
    im = y[i].im;
    twid_re = y[i].re - twid_re;
    y[i + 1].re = twid_re;
    twid_im = y[i].im - twid_im;
    y[i + 1].im = twid_im;
    y[i].re = re + temp_re;
    y[i].im = im + temp_im;
  }

  iy = 2;
  ix = 4;
  ju = 512;
  iheight = 2045;
  while (ju > 0) {
    for (i = 0; i < iheight; i += ix) {
      temp_re_tmp = i + iy;
      temp_re = y[temp_re_tmp].re;
      temp_im = y[temp_re_tmp].im;
      y[temp_re_tmp].re = y[i].re - y[temp_re_tmp].re;
      y[temp_re_tmp].im = y[i].im - y[temp_re_tmp].im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }

    istart = 1;
    for (j = ju; j < 1024; j += ju) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        temp_re_tmp = i + iy;
        temp_re = twid_re * y[temp_re_tmp].re - twid_im * y[temp_re_tmp].im;
        temp_im = twid_re * y[temp_re_tmp].im + twid_im * y[temp_re_tmp].re;
        y[temp_re_tmp].re = y[i].re - temp_re;
        y[temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ix;
      }

      istart++;
    }

    ju /= 2;
    iy = ix;
    ix += ix;
    iheight -= iy;
  }
}

/*
 * Arguments    : const creal_T x[1000]
 *                const float costab[1025]
 *                const float sintab[1025]
 *                creal_T y[2048]
 * Return Type  : void
 */
static void r2br_r2dit_trig_impl(const creal_T x[1000], const float costab[1025],
  const float sintab[1025], creal_T y[2048])
{
  int ix;
  int ju;
  int iy;
  int i;
  boolean_T tst;
  float twid_re;
  float temp_re;
  float twid_im;
  int iheight;
  float temp_im;
  float re;
  float im;
  int istart;
  int temp_re_tmp;
  int j;
  int ihi;
  memset(&y[0], 0, 2048U * sizeof(creal_T));
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 999; i++) {
    y[iy] = x[ix];
    iy = 2048;
    tst = true;
    while (tst) {
      iy >>= 1;
      ju ^= iy;
      tst = ((ju & iy) == 0);
    }

    iy = ju;
    ix++;
  }

  y[iy] = x[ix];
  for (i = 0; i <= 2046; i += 2) {
    twid_re = y[i + 1].re;
    temp_re = twid_re;
    twid_im = y[i + 1].im;
    temp_im = twid_im;
    re = y[i].re;
    im = y[i].im;
    twid_re = y[i].re - twid_re;
    y[i + 1].re = twid_re;
    twid_im = y[i].im - twid_im;
    y[i + 1].im = twid_im;
    y[i].re = re + temp_re;
    y[i].im = im + temp_im;
  }

  iy = 2;
  ix = 4;
  ju = 512;
  iheight = 2045;
  while (ju > 0) {
    for (i = 0; i < iheight; i += ix) {
      temp_re_tmp = i + iy;
      temp_re = y[temp_re_tmp].re;
      temp_im = y[temp_re_tmp].im;
      y[temp_re_tmp].re = y[i].re - y[temp_re_tmp].re;
      y[temp_re_tmp].im = y[i].im - y[temp_re_tmp].im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }

    istart = 1;
    for (j = ju; j < 1024; j += ju) {
      twid_re = costab[j];
      twid_im = sintab[j];
      i = istart;
      ihi = istart + iheight;
      while (i < ihi) {
        temp_re_tmp = i + iy;
        temp_re = twid_re * y[temp_re_tmp].re - twid_im * y[temp_re_tmp].im;
        temp_im = twid_re * y[temp_re_tmp].im + twid_im * y[temp_re_tmp].re;
        y[temp_re_tmp].re = y[i].re - temp_re;
        y[temp_re_tmp].im = y[i].im - temp_im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += ix;
      }

      istart++;
    }

    ju /= 2;
    iy = ix;
    ix += ix;
    iheight -= iy;
  }
}

/*
 * Arguments    : const float x[1000]
 *                const float costab[1025]
 *                const float sintab[1025]
 *                const float costabinv[1025]
 *                const float sintabinv[1025]
 *                const creal_T wwc[1999]
 *                creal_T y[1000]
 * Return Type  : void
 */
void bluestein(const float x[1000], const float costab[1025], const float
               sintab[1025], const float costabinv[1025], const float
               sintabinv[1025], const creal_T wwc[1999], creal_T y[1000])
{
  int xidx;
  int k;
  creal_T fv[2048];
  creal_T b_fv[2048];
  float im;
  float d;
  float d1;
  float d2;
  xidx = 0;
  for (k = 0; k < 1000; k++) {
    y[k].re = wwc[k + 999].re * x[xidx];
    y[k].im = wwc[k + 999].im * -x[xidx];
    xidx++;
  }

  r2br_r2dit_trig_impl(y, costab, sintab, fv);
  r2br_r2dit_trig(wwc, costab, sintab, b_fv);
  for (xidx = 0; xidx < 2048; xidx++) {
    im = fv[xidx].re * b_fv[xidx].im + fv[xidx].im * b_fv[xidx].re;
    b_fv[xidx].re = fv[xidx].re * b_fv[xidx].re - fv[xidx].im * b_fv[xidx].im;
    b_fv[xidx].im = im;
  }

  b_r2br_r2dit_trig(b_fv, costabinv, sintabinv, fv);
  xidx = 0;
  for (k = 0; k < 1000; k++) {
    im = wwc[k + 999].re;
    d = wwc[k + 999].im;
    d1 = fv[k + 999].re;
    d2 = fv[k + 999].im;
    y[xidx].re = im * d1 + d * d2;
    y[xidx].im = im * d2 - d * d1;
    xidx++;
  }
}

/*
 * File trailer for fft1.c
 *
 * [EOF]
 */
