//
// Created by yin on 4/14/22.
//

int main() {
  int a = 0;
  int b = 0;
  int c = 0;

  scanf("%d%d%d", &a, &b, &c);

  int min = 0;
  if (a >= b) {
    if (b >= c) {
      min = c;
    } else { // b < c
      min = b;
    }
  } else { // a < b
    if (a >= c) {
      min = c;
    } else {
      min = a;
    }
  }

  printf("min{%d,%d,%d} = %d", a, b, c, min);

  return 0;
}