#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef _COMPLEX_IMPLEMENTATION_
#define _COMPLEX_IMPLEMENTATION_
typedef struct {
  float a;
  float b;
} Complex;

Complex ConjugatedComplex(Complex *z);
Complex Add(Complex *z,Complex *z_2);
Complex Substract(Complex *z,Complex *z_2);
Complex Multiply(Complex *z,Complex *z_2);
Complex Divide(Complex *z, Complex *z_2);
Complex GetRandomComplex(float min, float max);
void PrintComplex(Complex *z);
#endif
