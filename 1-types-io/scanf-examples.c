//
// Created by yin on 4/14/22.
//
#include <stdio.h>

int main() {
  /*
   * input: 56789 0123 56a72
   */
//  int i;
//  double x;
//  char name[50];
//
//  /*
//   * %*d *: do not assign it to a variable
//   * %[scanlist]: only appear in scanlist
//   */
//
//  scanf("%2d %lf %*d %[0123456789]", &i, &x, name);
//  printf("i = %d \t x = %f \t name = %s", i, x, name);

  double quantity = 0;
  char units[21] = "";
  char item[21] = "";

  /*
   * 2 quarts of oil
   * -12.8 degrees Celsius
   * lots of luck
   * 10.0LBS of
   * dirt
   * 100ergs of energy
   * EOF: end of file
   * %[^scanlist]: not in scanlist
   * ^D ctrl + D EOF
   */
  while (scanf("%lf %20s of %20s", &quantity, units, item) != EOF) {
    printf("quantity = %f \t units = %s \t item = %s\n", quantity, units, item);
    scanf("%*[^\n]"); // error
  }

  return 0;
}