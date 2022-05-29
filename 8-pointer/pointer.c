//
// Created by yin on 5/29/22.
//

#include <stdio.h>

int main() {
  int radius = 10;
  printf("radius = %d\n", radius);

  /*
   * *: Indirection/Dereferencing 间接寻址/解引用
   */
  int *ptr_radius = &radius; // using this
//  int* ptr_radius = &radius;
//  int * ptr_radius = &radius;
  printf("ptr_radius = %p\n", ptr_radius);
  printf("*ptr_radius = %d\n", *ptr_radius);
  printf("&radius = %p\n", &radius);
  printf("&radius = %x\n", ptr_radius);

  double circumference = 2 * 3.14 * (*ptr_radius);
  printf("circumference = %f\n", circumference);

  radius = 20;
  printf("radius = %d\n", radius);

  *ptr_radius = 30;
  printf("radius = %d\n", radius);

  int radius_1 = 100;
  int *ptr_radius_1 = &radius_1;

  ptr_radius = ptr_radius_1;
  *ptr_radius = 200;
  printf("radius = %p\n", *ptr_radius_1);
  printf("radius = %d\n", *ptr_radius);

  int arr[5] = {0};
  int *ptr_array = arr;
  ptr_array++; // is a variable
  arr++; // not a variable

  return 0;
}