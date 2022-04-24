//
// Created by yin on 4/14/22.
//

int main() {
  int numbers[5] = {0};
  /*
   * []: subscript operator
   */
  for (int i = 0; i < 5; i++) {
    scanf("%d", &numbers[i]);
  }

  int min = numbers[0];
  for (int i = 1; i < 5; i++) {
    if (min > numbers[i]) {
      min = numbers[i];
    }
  }

  for (int i = 0; i < 5; ++i) {
    printf("%d\t", numbers[i]);
  }

//  printf("\n");
  printf("\nmin = %d\n", min);

  return 0;
}