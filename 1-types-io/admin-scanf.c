//
// Created by yin on 4/14/22.
//

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
  /*
   * Name and gender
   */
  char first_name[5]; // '\o terminating null character
  char last_name[3];
  char gender;

  /*
   * Birthday
   */
  int birth_year = 1954;
  int birth_month = 7;
  int birth_day = 20;
  char weekday[10];

  /*
   * Scores
   */
  int c_score;
  int music_score;
  int medicine_score;

  /*
   * Statistic
   */
  double mean = (c_score + music_score + medicine_score) / 3.0;
  double std_deviation = sqrt((pow(c_score - mean, 2) + pow(music_score - mean, 2) + pow(medicine_score - mean, 2)));
  int rank = 10;

  /*
   * Tayu lo
   * M
   * 1957-7-20
   * Tuesday
   * 40 100 80
   * 10% 73.3 24.94
   */
  scanf("%4s %2s %c %4d-%2d-%2d %9s %d %d %d %d %% %lf %lf",
        first_name, last_name, &gender,
        &birth_year, &birth_month, &birth_day, weekday,
        &c_score, &music_score, &medicine_score,
        &rank, &mean, &std_deviation
  );

  printf("%s %s \t %c \n"
         "%.2d-%.2d-%.4d, %.3s.\n"
         "C = %d \t Music = %d \t Medicine = %d\n"
         "Mean = %.1f \t SD = %.2f \t Top = %d%%\n",
         first_name, last_name, toupper(gender),
         birth_month, birth_day, birth_year, weekday,
         c_score, music_score, medicine_score,
         mean, std_deviation, rank);

  return 0;
}