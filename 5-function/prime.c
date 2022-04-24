//
// Created by yin on 4/14/22.
//

#include <stdio.h>
#include <math.h>

// function declearation (声明）
int IsPrime(int number);

int main() {
  int max = 0;
  scanf("%d", &max);

  for (int i = 2; i <= max; i++) {

    if (IsPrime(i)) {
      printf("%d\t", i);
    }
  }
  return 0;
}

// function definiton（定义)

/**
 * Check whether the number NUMBER is a prime number.
 * @param number The number to check.
 * @return 1 if NUMBER is a prime number, 0 otherwise
 */
int IsPrime(int number) {

  // int is_prime = 1;
  for (int j = 2; j <= ceil(sqrt(number)); j++) {
    if (number % j == 0) {
      // is_prime = 0;
      // break;
      return 0;
    }
  }
//  return is_prime;
  return 1;
}

