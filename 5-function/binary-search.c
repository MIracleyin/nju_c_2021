//
// Created by yin on 4/14/22.
// todo if have same number, how to find the left idx or the right idx


#include <stdio.h>

#define MAX 20
int dict[MAX] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

// array paramaters array and its len
// undefine UD
int BinarySearch(int key, const int dict[], int len);

int main() {
  int key = 0;
  scanf("%d", &key);

  int index = BinarySearch(key, dict, MAX);

  if (index == -1) {
    printf("Not fount!\n");
  } else {
    printf("The index of %d is %d.\n", key, index);
  }

  return 0;
}

// array dict 未被修改
int BinarySearch(int key, const int dict[], int len) {

  int low = 0;
  int high = len - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (key > dict[mid]) {
      low = mid + 1;
    } else if (key < dict[mid]) {
      high = mid - 1;
    } else { // key = dict[mid]
      return mid;
    }
  }
  return -1;
}