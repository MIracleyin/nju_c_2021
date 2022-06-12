//
// Created by yin on 6/12/22.
//

#include <stdio.h>
#include <string.h>

int StrLen(const char *s);
size_t StrLenStd(const char *s);

//int main() {
//
//  // It's ok
////  char msg[20] = "Hello World!"; // const
////  *msg = 'N';
////  msg[0] = 'H';
//
//  char *msg = "Hello World!";
//  msg[0] = 'N'; // segment fault
//  *msg = 'N';
//
//  printf("The length of the message \"%s\" = %zu\n", msg, StrLenStd(msg));
//
//  return 0;
//}

int StrLen(const char *s) {
  int len = 0;
  while (*s != '\0') {
    s++; // 这里是地址的拷贝，所以是一个变量
    len++;
  }
  return len;
}

size_t StrLenStd(const char *s) {
  const char *sc;
  for (sc = s; *sc != '\0'; sc++);

  return (sc - s);
}

