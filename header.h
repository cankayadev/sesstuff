#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

extern int g_size;

void    ft_putchar(char c);
void    print_error(int error_code);
void    print_solution(char **puzzle_board);

void    set_clues(char **puzzle_board, char **clues);
char    **create_board(void);
char    **convert_in_array(char *str);
int     is_correct_params(char *str);

int     is_correct_left_view(char **puzzle_board, int row);
int     is_correct_top_view(char **puzzle_board, int column);
int     is_in_column(char **puzzle_board, int row, int column, int digit);
int     is_in_row(char **puzzle_board, int row, int column, int digit);
void    rush(char **clues);

char    **memory_allocation(int rows, int columns);
void    free_memory(char **table, int rows);

#endif
