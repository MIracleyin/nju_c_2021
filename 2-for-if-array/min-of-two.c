//
// Created by yin on 4/14/22.
//
#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  /*
   * &a: & "address-of operator"
   */

  scanf("%d%d", &a, &b);

  int min = a >= b ? b : a; // Do not use to much!

  printf("min{%d,%d} = %d\n", a, b, min);

}
