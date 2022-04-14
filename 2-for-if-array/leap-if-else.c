//
// Created by yin on 4/14/22.
//
# include <stdio.h>

int main() {
  int year = 0;
  scanf("%d", &year);

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        printf("The year %d is a common year\n", year);
      } else {
        printf("The year %d is not a common year\n", year);
      }
    } else {
      printf("The year %d is not a common year\n", year);
    }
  } else {
    printf("The year %d is not a common year\n", year);
  }

  return 0;
}