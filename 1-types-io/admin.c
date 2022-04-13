//
// Created by yin on 4/13/22.
// 0 48 A 41 a 61
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
  /*
   * Name and gender
   */
  char first_name[] = "Tayu"; // '\o terminating null character
  char last_name[] = "Lo";
  char gender = 'm';

  /*
   * Birthday
   */
  int birth_year = 1954;
  int birth_month = 7;
  int birth_day = 20;
  char weekday[] = "Tuesday";

  /*
   * Scores
   */
  int c_score = 40;
  int music_score = 100;
  int medicine_score = 80;

  /*
   * Statistic
   */
  double mean = (c_score + music_score + medicine_score) / 3.0;
  double std_deviation = sqrt((pow(c_score - mean, 2) + pow(music_score - mean, 2) + pow(medicine_score - mean, 2)));
  int rank = 10;

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