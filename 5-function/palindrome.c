//
// Created by yin on 4/14/22.
//

#include <stdio.h>

#define MAX 21
char string[MAX] = "";

int IsParlindrome(const char str[]);
int StrLen(const char str[]);

int main() {
  scanf("%20s", string);

  int len = StrLen(string);

  printf("The length of \"%s\" is %d.\n", string, len);

  printf("\"%s\" is %s a parlindrome", string, IsParlindrome(string) ? "" : "not");

  return 0;
}

int StrLen(const char str[]) {
  int len = 0;
  while (str[++len] != '\0');
  return len;
}

int IsParlindrome(const char str[]) {
  for (int i = 0, j = StrLen(str) - 1; i < j; i++, j--) {
    if (string[i] != string[j]){
      return 0;
    }
  }
  return 1;
}