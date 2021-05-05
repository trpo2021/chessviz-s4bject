#include "src/library.h"
#include <stdio.h>
#include <stdlib.h>

void move(char board[9][9])
{
    int rookcheck(char board[9][9], char turn[6])
    {
        int asciinumber = 56, asciiletter = 96, i, check = 0;

        if ((turn[0] == turn[3]) && (turn[1] < turn[4]))
            for (i = (asciinumber - turn[4]); i < (asciinumber - turn[1]) - 1;
                 i++) {
                if (board[(asciinumber - turn[1]) - i][(turn[0] - asciiletter)]
                    != ' ') {
                    check = 1;
                }
            }
        if ((turn[0] == turn[3]) && (turn[4] < turn[1]))
            for (i = (asciinumber - turn[1]) + 1; i < (asciinumber - turn[4]);
                 i++) {
                if (board[(asciinumber - turn[1]) + i][(turn[0] - asciiletter)]
                    != ' ') {
                    check = 1;
                }
            }
        if ((turn[1] == turn[4]) && (turn[3] < turn[0]))
            for (i = (turn[0] - asciiletter); i < (turn[3] - asciiletter) - 1;
                 i++) {
                if (board[(asciinumber - turn[1])][(turn[0] - asciiletter) + i]
                    != ' ') {
                    check = 1;
                }
            }
        if ((turn[1] == turn[4]) && (turn[0] < turn[3]))
            for (i = (turn[3] - asciiletter); i < (turn[0] - asciiletter) - 1;
                 i++) {
                if (board[(asciinumber - turn[1])][(turn[0] - asciiletter) + i]
                    != ' ') {
                    check = 1;
                }
            }
        if (check == 1)
            return -1;
        else
            return 0;
    }

    int a = 0;
    while (a != 1) {
        char steps[6];
        scanf("%s", steps);
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
        int asciinumber = 56, asciiletter = 96;
        if ((board[(asciinumber - steps[1])][(steps[0] - asciiletter)] == 'K')
            && (kingcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'K';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        } else if (
                (board[(asciinumber - steps[1])][(steps[0] - asciiletter)]
                 == 'k')
                && (kingcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'k';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        }

        if ((board[(asciinumber - steps[1])][(steps[0] - asciiletter)] == 'B')
            && ((abs(steps[0] - steps[3])) == (abs(steps[1] - steps[4])))
            && (bishopcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'B';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        } else if (
                (board[(asciinumber - steps[1])][(steps[0] - asciiletter)]
                 == 'b')
                && ((abs(steps[0] - steps[3])) == (abs(steps[1] - steps[4])))
                && (bishopcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'b';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        }

        if ((board[(asciinumber - steps[1])][(steps[0] - asciiletter)] == 'Q')
            && ((abs(steps[0] - steps[3])) == (abs(steps[1] - steps[4])))
            && (bishopcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'Q';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        } else if (
                (board[(asciinumber - steps[1])][(steps[0] - asciiletter)]
                 == 'q')
                && ((abs(steps[0] - steps[3])) == (abs(steps[1] - steps[4])))
                && (bishopcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'q';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        } else if (
                (board[(asciinumber - steps[1])][(steps[0] - asciiletter)]
                 == 'Q')
                && (rookcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'Q';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        } else if (
                (board[(asciinumber - steps[1])][(steps[0] - asciiletter)]
                 == 'q')
                && (rookcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'q';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        }
        if ((board[(asciinumber - steps[1])][(steps[0] - asciiletter)] == 'R')
            && (rookcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'R';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        } else if (
                (board[(asciinumber - steps[1])][(steps[0] - asciiletter)]
                 == 'R')
                && (rookcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'R';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        } else if (
                (board[(asciinumber - steps[1])][(steps[0] - asciiletter)]
                 == 'r')
                && (rookcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'r';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        } else if (
                (board[(asciinumber - steps[1])][(steps[0] - asciiletter)]
                 == 'r')
                && (rookcheck(board, steps) == 0)) {
            board[(asciinumber - steps[4])][(steps[3] - asciiletter)] = 'r';
            board[(asciinumber - steps[1])][(steps[0] - asciiletter)] = ' ';
        }

 

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