//
// Created by yin on 4/14/22.
// todo if have same number, how to find the left idx or the right idx


#include <stdio.h>

#define MAX 20
int dict[MAX] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
int main() {
  int key = 0;
  scanf("%d", &key);

  int index = -1;


  int low = 0;
  int high = MAX - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (key > dict[mid]) {
      low = mid + 1;
    } else if (key < dict[mid]) {
      high = mid - 1;
    } else { // key = dict[mid]
      index = mid;
      break;
    }
  }

  if (index == -1) {
    printf("Not fount!\n");
  } else {
    printf("The index of %d is %d.\n", key, index);
  }

  return 0;
}

