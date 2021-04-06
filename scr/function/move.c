#include "library.h"

void move(char board[9][9]) {
  int a = 0;
  while (a != 1) {
    char steps[5];
    scanf("%s", steps);
    printf("%c\n", steps[4]);
    if (steps[0] == 'a') { //условия для пешек
      if (steps[4] == '3') {
        board[6][1] = ' ';
        board[5][1] = 'P';
      }
      if (steps[1] == '3') {
        if (steps[4] == '4') {
          board[5][1] = ' ';
          board[4][1] = 'P';
        }
      }
      if (steps[4] == '4') {
        board[6][1] = ' ';
        board[4][1] = 'P';
      }
    }
    if (steps[0] == 'b') {
      if (steps[4] == '3') {
        board[6][2] = ' ';
        board[5][2] = 'P';
      }
      if (steps[1] == '3') {
        if (steps[4] == '4') {
          board[5][2] = ' ';
          board[4][2] = 'P';
        }
      }
      if (steps[4] == '4') {
        board[6][2] = ' ';
        board[4][2] = 'P';
      }
    }
    if (steps[0] == 'c') {
      if (steps[4] == '3') {
        board[6][3] = ' ';
        board[5][3] = 'P';
      }
      if (steps[1] == '3') {
        if (steps[4] == '4') {
          board[5][3] = ' ';
          board[4][3] = 'P';
        }
      }
      if (steps[4] == '4') {
        board[6][3] = ' ';
        board[4][3] = 'P';
      }
    }
    if (steps[0] == 'd') {
      if (steps[4] == '3') {
        board[6][4] = ' ';
        board[5][4] = 'P';
      }
      if (steps[1] == '3') {
        if (steps[4] == '4') {
          board[5][4] = ' ';
          board[4][4] = 'P';
        }
      }
      if (steps[4] == '4') {
        board[6][4] = ' ';
        board[4][4] = 'P';
      }
    }
    if (steps[0] == 'e') {
      if (steps[4] == '3') {
        board[6][5] = ' ';
        board[5][5] = 'P';
      }
      if (steps[1] == '3') {
        if (steps[4] == '4') {
          board[5][5] = ' ';
          board[4][5] = 'P';
        }
      }
      if (steps[4] == '4') {
        board[6][5] = ' ';
        board[4][5] = 'P';
      }
    }
    if (steps[0] == 'f') {
      if (steps[4] == '3') {
        board[6][6] = ' ';
        board[5][6] = 'P';
      }
      if (steps[1] == '3') {
        if (steps[4] == '4') {
          board[5][6] = ' ';
          board[4][6] = 'P';
        }
      }
      if (steps[4] == '4') {
        board[6][6] = ' ';
        board[4][6] = 'P';
      }
    }
    if (steps[0] == 'g') {
      if (steps[4] == '3') {
        board[6][7] = ' ';
        board[5][7] = 'P';
      }
      if (steps[1] == '3') {
        if (steps[4] == '4') {
          board[5][7] = ' ';
          board[4][7] = 'P';
        }
      }
      if (steps[4] == '4') {
        board[6][7] = ' ';
        board[4][7] = 'P';
      }
    }
    if (steps[0] == 'h') {
      if (steps[4] == '3') {
        board[6][8] = ' ';
        board[5][8] = 'P';
      }
      if (steps[1] == '3') {
        if (steps[4] == '4') {
          board[5][8] = ' ';
          board[4][8] = 'P';
        }
      }
      if (steps[4] == '4') {
        board[6][8] = ' ';
        board[4][8] = 'P';
      }
    }
    //для другой стороны доски
    if (steps[0] == 'a') {
      if (steps[4] == '6') {
        board[1][1] = ' ';
        board[2][1] = 'p';
      }
      if (steps[1] == '6') {
        if (steps[4] == '5') {
          board[2][1] = ' ';
          board[3][1] = 'p';
        }
      }
      if (steps[4] == '5') {
        board[1][1] = ' ';
        board[3][1] = 'p';
      }
    }
    if (steps[0] == 'b') {
      if (steps[4] == '6') {
        board[6][2] = ' ';
        board[2][2] = 'p';
      }
      if (steps[1] == '6') {
        if (steps[4] == '5') {
          board[2][2] = ' ';
          board[3][2] = 'p';
        }
      }
      if (steps[4] == '5') {
        board[1][2] = ' ';
        board[3][2] = 'p';
      }
    }
    if (steps[0] == 'c') {
      if (steps[4] == '6') {
        board[1][3] = ' ';
        board[2][3] = 'p';
      }
      if (steps[1] == '6') {
        if (steps[4] == '5') {
          board[2][3] = ' ';
          board[3][3] = 'p';
        }
      }
      if (steps[4] == '5') {
        board[1][3] = ' ';
        board[3][3] = 'p';
      }
    }
    if (steps[0] == 'd') {
      if (steps[4] == '6') {
        board[1][4] = ' ';
        board[2][4] = 'p';
      }
      if (steps[1] == '6') {
        if (steps[4] == '5') {
          board[2][4] = ' ';
          board[3][4] = 'P';
        }
      }
      if (steps[4] == '5') {
        board[1][4] = ' ';
        board[3][4] = 'P';
      }
    }
    if (steps[0] == 'e') {
      if (steps[4] == '6') {
        board[1][5] = ' ';
        board[2][5] = 'p';
      }
      if (steps[1] == '6') {
        if (steps[4] == '5') {
          board[2][5] = ' ';
          board[3][5] = 'P';
        }
      }
      if (steps[4] == '5') {
        board[1][5] = ' ';
        board[3][5] = 'P';
      }
    }
    if (steps[0] == 'f') {
      if (steps[4] == '6') {
        board[1][6] = ' ';
        board[2][6] = 'P';
      }
      if (steps[1] == '6') {
        if (steps[4] == '5') {
          board[2][6] = ' ';
          board[3][6] = 'P';
        }
      }
      if (steps[4] == '5') {
        board[1][6] = ' ';
        board[3][6] = 'P';
      }
    }
    if (steps[0] == 'g') {
      if (steps[4] == '6') {
        board[1][7] = ' ';
        board[2][7] = 'p';
      }
      if (steps[1] == '6') {
        if (steps[4] == '5') {
          board[2][7] = ' ';
          board[3][7] = 'P';
        }
      }
      if (steps[4] == '5') {
        board[1][7] = ' ';
        board[3][7] = 'p';
      }
    }
    if (steps[0] == 'h') {
      if (steps[4] == '6') {
        board[1][8] = ' ';
        board[2][8] = 'P';
      }
      if (steps[1] == '6') {
        if (steps[4] == '5') {
          board[2][8] = ' ';
          board[3][8] = 'P';
        }
      }
      if (steps[4] == '5') {
        board[1][8] = ' ';
        board[3][8] = 'P';
      }
    }
    //условия для пешек

    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        printf("%2c", board[i][j]);
      }
      printf("\n");
    }
    printf("End game?(1 = end)\n");
    scanf("%d", &a);
  }
}