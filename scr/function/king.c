#include "src/library.h"
#include <stdio.h>
#include <stdlib.h>

int kingcheck(char board[9][9], char turn[6])
    {
        if ((turn[0] == turn[3]) && (turn[1] == (turn[4] + 1))) {
            return 0;
        } else if ((turn[0] == turn[3]) && (turn[1] == (turn[4] - 1))) {
            return 0;
        } else if ((turn[0] == (turn[3] + 1)) && (turn[1] == turn[4])) {
            return 0;
        } else if ((turn[0] == (turn[3] - 1)) && (turn[1] == turn[4])) {
            return 0;
        } else if ((abs(turn[0] - turn[3])) == (abs(turn[1] - turn[4]))) {
            return 0;
        } else
            return -1;
    }