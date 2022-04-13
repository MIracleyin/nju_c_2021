//
// Created by yin on 4/13/22.
//
#include <stdio.h>
#include <math.h>

int main(){
  /*
   * const: constant
   */
  const double PI = 3.1415926;
  int radius = 10; // introduce a variable called radius. is also a definition.
  double circumference = 0;
  /*
   * assignment statement
   */
  circumference = 2 * PI * radius;
  double area = PI * radius * radius;
  /*
   *  %f: floating-point number
   */
  printf("circumference = %.2f\narea = %.2f\n", circumference, area);
  return 0;
}