#include "header.h"

int is_correct_right_view(char **puzzle_board, int row)
{
    int     i;
    char    visible;
    char    highest;

    i = g_size;
    visible = '1';
    highest = puzzle_board[row][i];
    while (i >= 1)
    {
        if (puzzle_board[row][i] > highest)
        {
            highest = puzzle_board[row][i];
            visible++;
        }
        i--;
    }
    return (puzzle_board[row][g_size + 1] == visible);
}

int is_correct_left_view(char **puzzle_board, int row)
{
    int     i;
    char    visible;
    char    highest;

    i = 1;
    visible = '1';
    highest = puzzle_board[row][i];
    while (i <= g_size)
    {
        if (puzzle_board[row][i] > highest)
        {
            highest = puzzle_board[row][i];
            visible++;
        }
        i++;
    }
    if (puzzle_board[row][0] == visible)
        return (is_correct_right_view(puzzle_board, row));
    return (0);
}

int is_correct_bottom_view(char **puzzle_board, int column)
{
    int     i;
    char    visible;
    char    highest;

    i = g_size;
    visible = '1';
    highest = puzzle_board[i][column];
    while (i >= 1)
    {
        if (puzzle_board[i][column] > highest)
        {
            highest = puzzle_board[i][column];
            visible++;
        }
        i--;
    }
    return (puzzle_board[g_size + 1][column] == visible);
}

int is_correct_top_view(char **puzzle_board, int column)
{
    int     i;
    char    visible;
    char    highest;

    i = 1;
    visible = '1';
    highest = puzzle_board[i][column];
    while (i <= g_size)
    {
        if (puzzle_board[i][column] > highest)
        {
            highest = puzzle_board[i][column];
            visible++;
        }
        i++;
    }
    if (puzzle_board[0][column] == visible)
        return (is_correct_bottom_view(puzzle_board, column));
    return (0);
}
