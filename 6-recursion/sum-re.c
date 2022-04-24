//
// Created by yin on 4/24/22.
//

#include <stdio.h>
#define NUM 5

int Sum(int nums[], int len);
int main() {
  int sum = 0;
  int numbers[NUM] = {};
  for (int i = 0; i < NUM; i++) {
    scanf("%d", &numbers[i]);
  }

  printf("sum: %d", Sum(numbers, NUM));

  return 0;
}
int Sum(int nums[], int len) {
  if (len == 1) {
    return nums[0];
  }
  return nums[len - 1] + Sum(nums, len - 1);
}