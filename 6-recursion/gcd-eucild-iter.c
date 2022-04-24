//
// Created by yin on 4/24/22.
//

#include <stdio.h>

int GCDEuclid(int a, int b);

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

  printf("gcd(%d, %d) = %d\n", a, b, GCDEuclid(a, b));
  return 0;
}

int GCDEuclid(int a, int b) {
  if (a == b) {
    return a;
  }

  if (a > b) {
    return GCDEuclid(a - b, b);
  }

  return GCDEuclid(a, b - a);

}