#include "library.h"
#include <stdio.h>
#include <stdlib.h>

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