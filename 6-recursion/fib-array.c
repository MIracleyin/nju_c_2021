//
// Created by yin on 4/24/22.
//
#include <stdio.h>
#define LEN 100

int main() {
  long long fibs[LEN] = {0, 1};

  int n;
  scanf("%d", &n);

  for (int i = 2; i <= n; i++) {
    fibs[i] = fibs[i - 1] + fibs[i - 2];
  }

  for (int i = 0; i <= n; i++) {
    printf("%lld ", fibs[i]);
  }
  return 0;
}
