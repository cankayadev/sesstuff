#include "header.h"

char    **memory_allocation(int rows, int columns)
{
    char    **table;
    int     i;

    i = 0;
    table = (char **)malloc(sizeof(char *) * rows);
    if (table == NULL)
        return (NULL);
    while (i < rows)
    {
        table[i] = (char *)malloc(sizeof(char) * columns);
        if (table[i] == NULL)
            return (NULL);
        i++;
    }
    return (table);
}

void    free_memory(char **table, int rows)
{
    int i;

    i = 0;
    if (table == NULL)
    {
        return ;
    }
    while (i < rows)
    {
        if (table[i] != NULL)
        {
            free(table[i]);
            table[i] = NULL;
        }
        i++;
    }
    free(table);
    table = NULL;
}
