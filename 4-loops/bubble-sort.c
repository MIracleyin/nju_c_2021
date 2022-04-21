//
// Created by yin on 4/21/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 100000
int numbers[LEN] = {6, 5, 3, 1, 8, 7, 2, 4};
int main() {

  srand(time(NULL));
  for (int i = 0; i < LEN; i++) {
    numbers[i] = rand() % LEN;
  }
//
//  for (int i = 0; i < 10; i++) {
//    printf("%d ", numbers[i]);
//  }
//  printf("\n");

  clock_t start = clock();
  for (int i = 0; i < LEN; i++) {
    for (int j = i + 1; j < LEN; j++) {
      if (numbers[i] > numbers[j]) { // reviser
        int t = numbers[j];
        numbers[j] = numbers[i];
        numbers[i] = t;
      }
    }
  }

  clock_t diff = clock() - start;
  double sec = diff / CLOCKS_PER_SEC;
  printf("Sorting time taken %lf seconds. \n", sec);

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}