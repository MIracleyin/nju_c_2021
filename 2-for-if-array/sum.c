//
// Created by yin on 4/14/22.
//


int main() {
  int n = 0;
  scanf("%d", &n);

  int sum = 0;
  /*
   * for: keyword
   * for (<expression> ; <expression> ; <expression>)
   * <statement>
   * for (init; condition; increment/decrement}
   * statement
   * loop 1: i <= 100 => sum = sum + 1 = 1; i++ => i = 2
   * loop 2: 2 <= 100 => sum = sum + 2 = 3; i+ => i = 3
   * ...
   * loop 100: i <= 100 => sum = sum + 100; i++ => i = 101
   * loop 101: i <= 100 => exit the for loop
   */
  for (int i = 1; i <= n; ++i) { // int i = 1 will less compute
    /*
     * sum = sum + i
     */
    sum += i;
  }
  printf("sum = %d.\n", sum);
  return 0;
}