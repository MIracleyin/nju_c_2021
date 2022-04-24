//
// Created by yin on 4/14/22.
//
#include <stdio.h>

// func name google stype
// UpperCamelCase

// year: formal parameter (形式参数）
// 作用域 无冲突
int IsLeapYear(int year) {
  // func body
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// global variable (outside all functions)
//int year;

int main() {
  // local variable
  int year;
  scanf("%d", &year);

  /*
   *  && and || or
   */

  if (IsLeapYear(year)) {
    printf("The year %d is a leap year\n", year);
  } else {
    printf("The year %d is a common year\n", year);
  }

  return 0;
}