//
// Created by yin on 4/14/22.
//

#include <stdio.h>

#define MAX 3
int numbers[MAX] = {0};

int main() {
  /*
   * Input the array
   */
/*
   * VLA: variable-length array
   * C99 introduces VLS
   * C11 makes it optional
   * so not using
   * assign can't init
   */
  int len = -1;
  while (scanf("%d", &numbers[++len]) != EOF);

  for (int i = 0; i < len; i++) {
    printf("%d\t", numbers[i]);
  }
  printf("\n");

  for (int i = 0; i < len; i++) {
    /*
     * find the minimum value among numbers[i] .. numbers[len - 1]
     */
    int min = numbers[i];
    int min_index = i;
    for (int j = i + 1; j < len; j++) {
      if (min < numbers[j]) {
        min = numbers[j];
        min_index = j;
      }
    }
    int t = 0;
    t = numbers[i];
    numbers[i] = numbers[min_index];
    numbers[min_index] = t;
  }
  for (int i = 0; i < len; i++) {
    printf("%d\t", numbers[i]);
  }
  printf("\n");
  return 0;
}

/*
 * swap numbers[i] and numbers[min_index]
 */




//  int len = -1;
//  while (scanf("%d", &numbers[++len]) != EOF);




