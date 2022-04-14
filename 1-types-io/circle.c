//
// Created by yin on 4/13/22.
//
#include <stdio.h>
#include <math.h>

int main(){
  /*
   * const: constant, ps: PI is a Literal constants
   */
  const double PI = 3.1415926;
  /*
   * &: address-of operator
   * %d: skip the white-spaces, than identify an integer
   * %lf: skip the white-spaces, then identify a floating-point number
   *  and assign it to a variable of double type
   * count = scanf(...): the number of matched items
   */
  double radius; // introduce a variable called radius. is also a definition.

  if (scanf("%lf", &radius) == 1) {
    printf("radius = %f\n", radius);
  }

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