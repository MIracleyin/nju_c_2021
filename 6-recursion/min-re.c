//
// Created by yin on 4/14/22.
//

#include <stdio.h>

#define NUM 5

int Min(const int nums[], int len);
int main() {
  int numbers[NUM] = {0};
  /*
   * []: subscript operator
   */
  for (int i = 0; i < NUM; i++) {
    scanf("%d", &numbers[i]);
  }

  int min = numbers[0];
  for (int i = 1; i < NUM; i++) {
    if (min > numbers[i]) {
      min = numbers[i];
    }
  }

  for (int i = 0; i < NUM; ++i) {
    printf("%d\t", numbers[i]);
  }

//  printf("\n");
  printf("\nmin = %d\n", Min(numbers, NUM));

  return 0;
}

int Min(const int nums[], int len) {
  if (len == 1) {
    return nums[0];
  }
  int min = Min(nums, len - 1);
  return nums[len - 1] > min ? min : nums[len - 1];

}