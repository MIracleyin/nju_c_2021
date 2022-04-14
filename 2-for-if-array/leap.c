//
// Created by yin on 4/14/22.
//


int main() {
  int year = 0;
  scanf("%d", &year);

  /*
   *  && and || or
   */
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("The year %d is a leap year\n", year);
  } else {
    printf("The year %d is a common year\n", year);
  }

  return 0;
}