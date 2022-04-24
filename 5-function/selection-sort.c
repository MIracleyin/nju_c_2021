//
// Created by yin on 4/14/22.
//

#include <stdio.h>

#define MAX 3
int numbers[MAX] = {0};

void SelectionSort(int arr[], int len);
void PrintArr(const int arr[], int len);
void SwapElement(int left, int right);

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

  // is array copy?
  // passing array also copy memory place
  // array fist element
  SelectionSort(numbers, len);
  PrintArr(numbers, len);
  printf("\n");
  return 0;
}

void SelectionSort(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    /*
     * find the minimum value among numbers[i] .. numbers[len - 1]
     */
    int min = arr[i];
    int min_index = i;
    for (int j = i + 1; j < len; j++) {
      if (min < arr[j]) {
        min = arr[j];
        min_index = j;
      }
    }
    // actual arguments
//    SwapElement(arr[i], arr[min_index]);
    int tmp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = tmp;
  }

}

void PrintArr(const int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d\t", arr[i]);
  }
}

// format arguments
// pass by value (传值) copy
void SwapElement(int left, int right) {
  int tmp = left;
  left = right;
  right = tmp;
}