//
// Created by yin on 2022/4/20.
//
#include <stdio.h>
#include <unistd.h>

#define ROUND 10
#define SIZE 6
int board[SIZE][SIZE] = {
    {0},
    {0},
    {0, 0, 1, 1, 1, 0},
    {0, 1, 1, 1, 0, 0},
    {0},
    {0}
};

int main() {
  /*
   * (extended) board
   */
  int old_board[SIZE + 2][SIZE + 2];
  for (int row = 0; row < SIZE + 2; row++) {
    for (int col = 0; col < SIZE + 2; col++) {
      if (row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1) {
        old_board[row][col] = 0;
      } else {
        old_board[row][col] = board[row - 1][col - 1];
      }
    }
  }

  /**
   * print the current configuration
   */
  for (int row = 1; row < SIZE + 1; row++) {
    for (int col = 1; col < SIZE + 1; col++) {
      printf("%c ", old_board[row][col] ? '*' : ' ');
    }
    printf("\n");
  }
  sleep(1);
  printf("\033c"); // only for linux


  /*
   * generate the next-round borad
   */
  int new_board[SIZE + 2][SIZE + 2];

  for (int round = 0; round < ROUND; round++) { // round time
    for (int row = 1; row < SIZE + 1; row++) { // old board -> new board
      for (int col = 1; col < SIZE + 1; col++) {

        int neighbors = old_board[row - 1][col - 1]
            + old_board[row - 1][col]
            + old_board[row - 1][col + 1]
            + old_board[row][col - 1]
            + old_board[row][col + 1]
            + old_board[row + 1][col - 1]
            + old_board[row + 1][col]
            + old_board[row + 1][col + 1];
//      printf("%d ", neighbors);

        new_board[row][col] =
            (old_board[row][col] && (neighbors == 2 || neighbors == 3))
                || (!old_board[row][col] && neighbors == 3);
      }
    }

    for (int row = 1; row < SIZE + 1; row++) {
      for (int col = 1; col < SIZE + 1; col++) {
        printf("%c ", new_board[row][col] ? '*' : ' ');
      }
      printf("\n");
    }
    sleep(1);
    printf("\033c");
    /*
 * copy board
 */
    for (int row = 1; row < SIZE + 1; row++) {
      for (int col = 1; col < SIZE + 1; col++) {
        old_board[row][col] = new_board[row][col];
      }
    }
  }

  return 0;
}


