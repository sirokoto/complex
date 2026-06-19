#include "complex.h"

Complex ConjugatedComplex(Complex *z) {
  return (Complex){z->a, -z->b};
}

Complex Add(Complex *z_1, Complex *z_2) {
  return (Complex){z_1->a + z_2->a, z_1->b + z_1->b};
}

Complex Substract(Complex *z_1, Complex *z_2) {
  return (Complex){z_1->a-z_2->a, z_1->b-z_2->b};
}

Complex Multiply(Complex *z_1, Complex *z_2) {
  return (Complex){(z_1->a*z_2->a-z_1->b*z_2->b), (z_1->a*z_2->b-z_1->b*z_2->a)};
}
Complex Divide(Complex *z_1, Complex *z_2) {
  assert(z_2->a != 0|| z_2->b != 0);
  return (Complex) {
    ((z_1->a * z_2->a + z_1->b * z_2->b) / (z_2->a * z_2->a + z_2->b * z_2->b)),
        ((z_1->b * z_2->a - z_1->a * z_2->b) / (z_2->a * z_2->a + z_2->b * z_2->b))
        };
}

Complex GetRandomComplex(float min, float max) {
  return (Complex){ (float)(rand() % (int)(min - max + 1) + min), (float)(rand() % (int)(min - max + 1) + min) };
}

void PrintComplex(Complex *z) {
  if (z->b > 0)
    printf("%f + %fi\n", z->a, z->b);
  else if (z->b < 0) {
    printf("%f - %fi\n", z->a, -z->b);
  }
  else if (z->a == 0) {
    printf("%fi\n", z->b);
  }
  else if (z->b == 0) {
    printf("%f\n", z->a);
  } else {
	fprintf(stderr, "Error: Invalid complex number");
  }
}
