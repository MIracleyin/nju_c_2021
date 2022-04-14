//
// Created by yin on 4/14/22.
//

#include <stdio.h>

int main() {
  int number = 0;
  scanf("%d", &number);

  int num_of_digits = 0;
  int tmp = number;
  /*
   * "while" verison
   */

//  if (tmp == 0) {
//    num_of_digits = 1;
//  } else {
//    while (tmp > 0) {
//      tmp /= 10;
//      num_of_digits++;
//    }
//  }
  /*
   * "do-while" verison
   */

  do{
    tmp /= 10;
    num_of_digits++;
  } while (tmp > 0);

  printf("the digits of number %d is %d", number, num_of_digits);
  
  return 0;
}
