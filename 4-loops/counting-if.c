//
// Created by yin on 4/21/22.
//

#include <stdio.h>
#include <ctype.h>
#define LEN 10

int main() {
  /*
   * input redirection technique
   */
  int digit_count[LEN] = {0};
  int ws_count = 0;
  int other_count = 0;

  /*
   * input
   */
  char ch;
  while (scanf("%c", &ch) != EOF) {
    if (isdigit(ch)) {
      digit_count[ch - '0']++; // ch '0'
    } else if (isspace(ch)) {
      ws_count++;
    } else {
      other_count++;
    }
  }

  printf("digit_count: \n");
  for (int i = 0; i < LEN; i++) {
    printf("%d : %d\n", i, digit_count[i]);
  }
  printf("\nws_count: %d\n", ws_count);
  printf("other_count: %d\n", other_count);

  return 0;

}