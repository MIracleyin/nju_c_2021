//
// Created by yin on 6/12/22.
//

#include <stdio.h>
#include "strlen.c"

void StrCpy1(char *dest, const char *src);
void StrCpy2(char *dest, const char *src);
void StrCpy3(char *dest, const char *src);
void StrCpy4(char *dest, const char *src);
void StrCpy5(char *dest, const char *src);
void StrCpy(char *dest, const char *src);
char *StrCpyStd(char *s1, char *s2);

int main() {
  char s[20] = "Hello World!";
  char d[StrLen(s) + 1];

  StrCpy(d, s);
  printf("src:%s, dest:%s", s, d);
  printf("\n");

  printf("src:%s, dest:%s", s, StrCpyStd(d, s));
  return 0;
}

/**
 * Copy string at src to dest
 *
 * @param dest
 * @param srt
 */
void StrCpy1(char *dest, const char *src) {
  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
}

void StrCpy2(char *dest, const char *src) {
  int i = 0;
  while ((dest[i] = src[i]) != '\0') {
    i++;
  }
  dest[i] = '\0';
}

void StrCpy3(char *dest, const char *src) {
  int i = 0;
  while ((* (dest + i) = * (src + i)) != '\0') {
    i++;
  }
  dest[i] = '\0';
}

void StrCpy4(char *dest, const char *src) {
  while ((* (dest++) = * (src++)) != '\0');
}

void StrCpy5(char *dest, const char *src) {
  while ((*dest++ = *src++) != '\0');
}

void StrCpy(char *dest, const char *src) {
  while ((*dest++ = *src++));
}

char *StrCpyStd(char *s1, char *s2) {
  char *s = s1;
  for (s = s1; (*s++ = *s2++) != '\0';);

  return s1;
}