//
// Created by yin on 4/13/22.
//
#include <stdio.h>
int main() {
  /*
   * e: exponent
   */
  const double MOL = 6.02e23;

  double quantity = 6.0 / 32 * MOL;
  /*
   * %g: %f or %e .n save 5 long
   */
  printf("%.3e\n%.5g\n", quantity, quantity);
}