//
// Created by yin on 4/14/22.
// todo if have same number, how to find the left idx or the right idx


#include <stdio.h>

#define MAX 10


int BinarySearch(int key, int dict[], int low, int high);

int main() {
  int dict[MAX] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

  int key = 0;
  scanf("%d", &key);

  printf("%d %d", key, BinarySearch(key, dict, 0, MAX - 1));

  return 0;
}

int BinarySearch(int key, int dict[], int low, int high) {
  if (low > high) {
    return -1;
  }
  int mid = (low + high) / 2;
  if (dict[mid] == key) {
    return mid;
  }
  if (dict[mid] > key) {
    // tail recursion （尾递归) 递归调用是最后一句 ex return
    return BinarySearch(key, dict, low, mid);
  }
  if (dict[mid] < key) {
    // tail recursion （尾递归) 递归调用是最后一句 ex return
    return BinarySearch(key, dict, mid + 1, high);
  }
}

