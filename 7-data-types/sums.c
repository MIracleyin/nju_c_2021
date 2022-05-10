//
// Created by yin on 5/10/22.
//

#include <stdio.h>

int main() {
  float f = 0.1F;
  float sum = 0.0F;

  for (int i = 0; i < 10; ++i) {
    sum += f;
  }

  float product = f * 10;

  printf("sumn = %.15f\nmul = %.15f\n",
         sum, product);

  return 0;
}