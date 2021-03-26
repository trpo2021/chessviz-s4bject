#include "library.h"
void print_board(char board[9][9])
{
    
    for(int i = 0;i < 9;i++){
        for(int j = 0;j < 9;j++){
            printf("%2c", board[i][j]);
        }
        printf("\n");
    }
}