#include "header.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_error(int error_code)
{
    int         message_len;
    const char  *error_messages[] = {"Error: Invalid input provided\n",
        "Error: Memory allocation failed\n",
        "Error: No valid solution found based on the provided clues."};

    message_len = 0;
    while (error_messages[error_code][message_len] != '\0')
    {
        message_len++;
    }
    write(2, error_messages[error_code], message_len);
}

void    print_solution(char **puzzle_board)
{
    int i;
    int j;

    i = 1;
    if (puzzle_board[0][0] == '1')
        return ;
    puzzle_board[0][0] = '1';
    while (i <= g_size)
    {
        j = 1;
        while (j <= g_size)
        {
            ft_putchar(puzzle_board[i][j]);
            j++;
            if (j != g_size + 1)
                ft_putchar(' ');
        }
        ft_putchar('\n');
        i++;
    }
}
