#include "header.h"

int g_size;

int main(int argc, char **argv)
{
    char    **clues;

    if (argc != 2)
    {
        print_error(0);
        return (1);
    }
    if (!is_correct_params(argv[1]))
    {
        print_error(1);
        return (1);
    }
    clues = convert_in_array(argv[1]);
    if (!clues)
    {
        print_error(1);
        return (1);
    }
    rush(clues);
    free_memory(clues, g_size);
    return (0);
}
