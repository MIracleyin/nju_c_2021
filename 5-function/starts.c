//
// Created by yin on 4/14/22.
//

#include <stdio.h>

void Print(char ch, int count);

int main() {
  int rows;
  scanf("%d", &rows);

  // c99 int i = 1
  for (int i = 1; i <= rows; i++) {
    Print(' ', rows - i);
    Print('*', 2 * i - 1);
    Print(' ', rows - i);

    if (i < rows) {
      printf("\n");
    }
  }
  return 0;
}

void Print(char ch, int count) {
  for (int i = 0; i < count; i++) {
    printf("%c", ch);
  }

}