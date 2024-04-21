#include "header.h"

int is_in_row(char **puzzle_board, int row, int column, int digit)
{
    int i;

    i = 1;
    while (i < column)
    {
        if (puzzle_board[row][i] == digit + '0')
            return (1);
        i++;
    }
    return (0);
}

int is_in_column(char **puzzle_board, int row, int column, int digit)
{
    int i;

    i = 1;
    while (i < row)
    {
        if (puzzle_board[i][column] == digit + '0')
            return (1);
        i++;
    }
    return (0);
}
