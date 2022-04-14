//
// Created by yin on 4/14/22.
//

#include <stdio.h>

#define MAX 21
char string[MAX] = "";

int main() {
  scanf("%20s", string);

  int len = 0;
  while (string[++len] != '\0');

  printf("The length of \"%s\" is %d.\n", string, len);

  int is_parlindrome = 1;
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (string[i] != string[j]){
      is_parlindrome = 0;
      break;
    }
  }
  printf("\"%s\" is %s a parlindrome", string, is_parlindrome ? "" : "not");

  return 0;
}

