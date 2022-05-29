//
// Created by yin on 5/29/22.
//

#include <stdio.h>

int StrLen(const char *s);

int main() {
  char msg[20] = "Hello World!"; // const
  // Don't do this! UB!!!
//  *msg = 'N';


  printf("The length of the message \"%s\" = %d\n", msg, StrLen(msg));

  return 0;
}

int StrLen(const char *s) {
  int len = 0;
  while (*s != '\0') {
    s++; // 这里是地址的拷贝，所以是一个变量
    len++;
  }
  return len;
}

