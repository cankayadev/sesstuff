#include "header.h"

void    set_clues(char **puzzle_board, char **clues)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (i <= g_size)
    {
        puzzle_board[0][i] = clues[0][j];
        puzzle_board[g_size + 1][i] = clues[1][j];
        puzzle_board[i][0] = clues[2][j];
        puzzle_board[i][g_size + 1] = clues[3][j];
        i++;
        j++;
    }
}

char    **create_board(void)
{
    char    **board;
    int     i;
    int     j;

    board = memory_allocation(g_size + 2, g_size + 2);
    i = 0;
    while (i < g_size + 2)
    {
        j = 0;
        while (j < g_size + 2)
        {
            board[i][j] = '0';
            j++;
        }
        i++;
    }
    return (board);
}

int is_correct_params(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] >= '1' && str[i] <= '9' && i % 2 == 0)
            count++;
        else if (str[i] != ' ')
            return (0);
        i++;
    }
    g_size = count / 4;
    if (count == g_size * 4 && g_size >= 4 && g_size <= 9)
        return (1);
    return (0);
}

char    **convert_in_array(char *str)
{
    char    **clues;
    int     i;
    int     j;

    i = 0;
    j = 0;
    clues = memory_allocation(4, g_size);
    while (j < g_size)
    {
        clues[0][j] = str[i];
        clues[1][j] = str[i + g_size * 2];
        clues[2][j] = str[i + g_size * 4];
        clues[3][j] = str[i + g_size * 6];
        j++;
        i += 2;
    }
    return (clues);
}
