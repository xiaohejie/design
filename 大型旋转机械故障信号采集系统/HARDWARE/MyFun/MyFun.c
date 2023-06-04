/*
 * File: MyFun.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 08-Sep-2022 16:43:09
 */

/* Include Files */
#include "MyFun.h"
#include <string.h>
#include "sys.h"
#include <time.h>
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */

/*
 * ����ƽ����/��ֵ�˲�������������
 * Arguments    : const float x[1024]
 *                float y[1024]
 * Return Type  : void
 */
void MyFun( float x[1024], float y[1024])
{
  int k;
  float a[1084];
  float b[1084];
  int j;
	
  /* ����һ��Ԫ��ȫΪ1�������� */
  for (k = 0; k < 30; k++) {
		if(x[0] > 10.0 || x[0] < -10.0){
			int i = rand() % 524 + 500;
			x[0] = x[i];
		}
    a[k] = x[0];
  }

	for(k = 0; k < 1024; k++){
		if(x[k] > 10.0 || x[k] < -10.0){
			int i = rand() % 524 + 500;
			x[k] = x[i];
		}
		a[k + 30] = x[k];
	}
	
//  memcpy(&a[30], &x[0], 1024U * sizeof(float));
  for (k = 0; k < 30; k++) {
    a[k + 1054] = x[1023];
  }
//	for(k = 0; k < 1060; k++){
//		printf("�񶯼��ٶȣ�%f���±�ֵ��%d\r\n", a[k], k);
//	}
	
  /* �ź����˷ֱ���������l������    */
  memcpy(&b[0], &a[0], 1084U * sizeof(float));

  /* ��ƽ������ѭ�����л���ƽ���������������  */
  for (k = 0; k < 30; k++) {
    for (j = 0; j < 993; j++) {
      b[j + 30] = ((a[j + 29] + a[j + 30]) + a[j + 31]) / 3.0;
			//printf("��ѹֵ��%f,   %f���±�%d\r\n", b[j + 30], x[j + 30], j+30);
    }
    memcpy(&a[0], &b[0], 1084U * sizeof(float));
  }

  for (k = 0; k < 1024; k++) {
    y[k] = x[k] - a[k + 30];
		//printf("��ѹֵ��%f��  %f,   %f���±�Ϊ��%d\r\n", x[k], a[k+30], y[k], k);
  }
	
	
	/*********************/
  /*  ������η�ƽ������ */
  /* status=fclose(fid); */
  for (k = 0; k < 5; k++) {
    b[0] = (((69.0 * y[0] + 4.0 * (y[1] + y[3])) - 6.0 * y[2]) - y[4]) / 70.0;
    b[1] = (((2.0 * (y[0] + y[4]) + 27.0 * y[1]) + 12.0 * y[2]) - 8.0 * y[3]) /
      35.0;
    for (j = 0; j < 1020; j++) {
      b[j + 2] = ((-3.0 * (y[j] + y[j + 4]) + 12.0 * (y[j + 1] + y[j + 3])) +
                  17.0 * y[j + 2]) / 35.0;
    }

    b[1022] = (((2.0 * (y[1023] + y[1019]) + 27.0 * y[1022]) + 12.0 * y[1021]) - 8.0 *
              y[1020]) / 35.0;
    b[1023] = (((69.0 * y[1023] + 4.0 * (y[1022] + y[1020])) - 6.0 * y[1021]) - y[1019])
      / 70.0;
    memcpy(&y[0], &b[0], 1024U * sizeof(float));
		for(k = 0; k < 1024; k++){
			//printf("ֵΪ��%f\r\n", y[k]);
			if(__ARM_isnan(y[k])){		//�ж��Ƿ�����Ч������
				int i = rand() % 524 + 500;
				y[k] = y[i];
			}
		}
  }
}

/******************
	*
	*����ֵ
	*
******************/
float funMean(const float v[1024]){
	float y = 0.0;
	int k;
	for(k = 0; k < 1024; k++){
		y += v[k];
	}
	return y / 1024.0;
}

/******************
	*
	*��׼��
	*
******************/
float funB_std(const float x[1024])
{
  float y;
  float xbar;
  int k;
  float scale;
  float d;
  float t;
  xbar = x[0];
  for (k = 0; k < 1023; k++) {
    xbar += x[k + 1];
  }

  xbar /= 1024.0;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 1024; k++) {
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

/******************
	*
	*ƫ��
	*
******************/
static float fun_rt_powd_snf(float u0, float u1)
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
float funSkewness(const float x[1024])
{
  float m1;
  int c;
  int k;
  float s2;
  float d;
  float x0[1024];
  float xp[1024];
  m1 = 0.0;
  c = 0;
  for (k = 0; k < 1024; k++) {
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
  for (k = 0; k < 1024; k++) {
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
  for (k = 0; k < 1024; k++) {
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

  return s2 / fun_rt_powd_snf(m1, 1.5);
}


/******************
	*
	*�Ͷ�
	*
******************/
float funKurtosis(const float x[1024])
{
  float m4;
  int c;
  int b_k;
  float s2;
  float d;
  float x0[1024];
  m4 = 0.0;
  c = 0;
  for (b_k = 0; b_k < 1024; b_k++) {
    if (!rtIsNaN(x[b_k])) {
      m4 += x[b_k];
      c++;
    }
  }

  if (c == 0) {
    m4 = rtNaN;
  } else {
    m4 /= (float)c;
  }

  s2 = 0.0;
  c = 0;
  for (b_k = 0; b_k < 1024; b_k++) {
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
    s2 /= (float)c;
  }

  m4 = 0.0;
  c = 0;
  for (b_k = 0; b_k < 1024; b_k++) {
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
    m4 /= (float)c;
  }

  return m4 / (s2 * s2);
}

/******************
	*
	*���ֵ
	*
******************/
float funPeak2Peak(const float v[1024])
{
	float y = funMean(v);
	boolean_T b;
  boolean_T exitg1;
  int k;
  int idx;
  float ex;
  float b_ex;
	
	b = rtIsNaN(v[0]);
  if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1025)) {
      if (!rtIsNaN(v[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = v[0];
  } else {
    ex = v[idx - 1];
    idx++;
    for (k = idx; k < 1025; k++) {
      y = v[k - 1];
      if (ex < y) {
        ex = y;
      }
    }
  }

  if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1025)) {
      if (!rtIsNaN(v[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    b_ex = v[0];
  } else {
    b_ex = v[idx - 1];
    idx++;
    for (k = idx; k < 1025; k++) {
      y = v[k - 1];
      if (b_ex > y) {
        b_ex = y;
      }
    }
  }

  return ex - b_ex;
}

/******************
	*
	*������
	*
******************/
float funRMS(const float v[1024]){
  int idx;
	int k;
	float y;
  float x_tmp[1024];
	for (idx = 0; idx < 1024; idx++) {
    x_tmp[idx] = v[idx] * v[idx];
  }

  y = x_tmp[0];
  for (k = 0; k < 1023; k++) {
    y += x_tmp[k + 1];
  }

  return sqrt(y / 1024.0);
}

/******************
	*
	*�������
	*
******************/
float funCrestFactor(const float v[1024]){
  int idx;
	int k;
  boolean_T b;
  boolean_T exitg1;
	float y;
  float ex;
	float x_tmp[1024];
	for (idx = 0; idx < 1024; idx++) {
    x_tmp[idx] = v[idx] * v[idx];
  }
	b = rtIsNaN(v[0]);
	if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1025)) {
      if (!rtIsNaN(v[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = v[0];
  } else {
    ex = v[idx - 1];
    idx++;
    for (k = idx; k < 1025; k++) {
      y = v[k - 1];
      if (ex < y) {
        ex = y;
      }
    }
  }

  y = x_tmp[0];
  for (k = 0; k < 1023; k++) {
    y += x_tmp[k + 1];
  }

  return ex / sqrt(y / 1024.0);
}

/******************
	*
	*��������
	*
******************/
float funShapeFactor(const float v[1024]){
  float b_y[1024];
	float y;
  float b_ex;
	int k;
	int idx;
	float x_tmp[1024];
	for (idx = 0; idx < 1024; idx++) {
    x_tmp[idx] = v[idx] * v[idx];
  }
	
	for (k = 0; k < 1024; k++) {
    b_y[k] = fabs(v[k]);
  }

  y = b_y[0];
  for (k = 0; k < 1023; k++) {
    y += b_y[k + 1];
  }

  b_ex = y / 1024.0;
  y = x_tmp[0];
  for (k = 0; k < 1023; k++) {
    y += x_tmp[k + 1];
  }

  return sqrt(y / 1024.0) / b_ex;
}

/******************
	*
	*�������
	*
******************/
float helper(const float v[1024]){		//��������
	float b_ex;
	float y;
	int k;
	int idx;
  float b_y[1024];
	float x_tmp[1024];
	for (idx = 0; idx < 1024; idx++) {
    x_tmp[idx] = v[idx] * v[idx];
  }
	
	for (k = 0; k < 1024; k++) {
    b_y[k] = fabs(v[k]);
  }

  y = b_y[0];
  for (k = 0; k < 1023; k++) {
    y += b_y[k + 1];
  }

  b_ex = y / 1024.0;
	return b_ex;
}
float helper2(const float v[1024]){		//��������2
	int idx;
	int k;
  boolean_T b;
  boolean_T exitg1;
	float y;
  float ex;
	float x_tmp[1024];
	for (idx = 0; idx < 1024; idx++) {
    x_tmp[idx] = v[idx] * v[idx];
  }
	b = rtIsNaN(v[0]);
	if (!b) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 1025)) {
      if (!rtIsNaN(v[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = v[0];
  } else {
    ex = v[idx - 1];
    idx++;
    for (k = idx; k < 1025; k++) {
      y = v[k - 1];
      if (ex < y) {
        ex = y;
      }
    }
  }
	return ex;
}
float funImpulseFactor(const float v[1024]){
  float b_ex = helper(v);
	float ex = helper2(v);
	return ex / b_ex;
}

/******************
	*
	*ԣ������
	*
******************/
float funMarginFactor(const float v[1024]){
	int k;
  float b_y[1024];
	float y;
	float b_ex;
	float ex = helper2(v);
	for (k = 0; k < 1024; k++) {
    b_y[k] = fabs(v[k]);
  }

  y = b_y[0];
  for (k = 0; k < 1023; k++) {
    y += b_y[k + 1];
  }

  b_ex = y / 1024.0;
  return ex / (b_ex * b_ex);
}

/******************
	*
	*����
	*
******************/
float funEnergy(const float v[1024]){
	int k;
	float x_tmp[1024];
	float energy;
	for (k = 0; k < 1024; k++) {
    x_tmp[k] = v[k] * v[k];
  }

  energy = x_tmp[0];
  for (k = 0; k < 1023; k++) {
    energy += x_tmp[k + 1];
  }
	return energy;
}


/*
 * File trailer for MyFun.c
 *
 * [EOF]
 */
