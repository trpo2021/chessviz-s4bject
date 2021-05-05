#include "src/library.h"
#include <stdio.h>
#include <stdlib.h>

int bishopcheck(char board[9][9], char turn[6])
    {
        int i, asciinumber = 56, asciiletter = 96, check = 0;

        if ((turn[3] - turn[0] > 0) && (turn[4] - turn[1] > 0)) {
            for (i = 1; i < (turn[3] - turn[0]); i++) {
                if (board[(asciinumber - turn[1]) - i]
                         [(turn[0] - asciiletter) + i]
                    != ' ') {
                    check = 1;
                }
            }
        } else if ((turn[3] - turn[0] > 0) && (turn[4] - turn[1] < 0)) {
            for (i = 1; i < (turn[3] - turn[0]); i++) {
                if (board[(asciinumber - turn[1]) + i]
                         [(turn[0] - asciiletter) + i]
                    != ' ') {
                    check = 1;
                }
            }
        } else if ((turn[3] - turn[0] < 0) && (turn[4] - turn[1] > 0)) {
            for (i = 1; i < (turn[0] - turn[3]); i++) {
                if (board[(asciinumber - turn[1]) - i]
                         [(turn[0] - asciiletter) - i]
                    != ' ') {
                    check = 1;
                }
            }
        } else if ((turn[3] - turn[0] < 0) && (turn[4] - turn[1] < 0)) {
            for (i = 1; i < (turn[0] - turn[3]); i++) {
                if (board[(asciinumber - turn[1]) + i]
                         [(turn[0] - asciiletter) - i]
                    != ' ') {
                    check = 1;
                }
            }
        }
        if (check == 1)
            return -1;
        else
            return 0;
    }