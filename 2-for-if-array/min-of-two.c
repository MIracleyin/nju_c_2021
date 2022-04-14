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

//  int min = 0;
//  if (a >= b) { // non-zero numbers are treated as true
//    min = b;
//  } else {
//    min = a;
//  }


  printf("min{%d,%d} = %d\n", a, b, min);

}
