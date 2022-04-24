//
// Created by yin on 4/24/22.
//

#include <stdio.h>

int Fib(int n);

int main() {
  int n;
  scanf("%d", &n);

  printf("Fib(%d) = %d\n", n, Fib(n));
  return 0;
}

int Fib(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  return Fib(n - 1) + Fib(n - 2);
}