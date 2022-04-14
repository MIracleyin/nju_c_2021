//
// Created by yin on 4/14/22.
//

#include <stdio.h>

int main() {
  int rows;
  scanf("%d", &rows);

  // c99 int i = 1
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= rows - i; j++) {
      printf(" ");
    }

    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }

    for (int j = 1; j <= rows - i; j++) {
      printf(" ");
    }

    if (i != rows) {
      printf("\n");
    }
  }
  return 0;
}
