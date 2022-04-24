//
// Created by yin on 4/24/22.
//

#include <stdio.h>

int GCD(int a, int b);

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

  printf("gcd(%d, %d) = %d\n", a, b, GCD(a, b));
  return 0;
  return 0;
}

int GCD(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }

  return a;

}
