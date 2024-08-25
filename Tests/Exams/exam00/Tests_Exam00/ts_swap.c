#include "exam00.h"
#include "../../../../../CC_Exam00/swap.c"

int	main(void)
{
    int i = 0;
    const int test_count = 5;
    int pass = 0;
    int x[] = {2, 11, 37, -52, 5};
    int y[] = {3, 10, 13, -1337, -1};
    int x_old[] = {2, 11, 37, -52, 5};
    int y_old[] = {3, 10, 13, -1337, -1};

    while (i < test_count)
    {
        ft_swap(&x[i], &y[i]);
        if (x[i] == y_old[i] && y[i] == x_old[i])
            pass++;
        i++;
    }
    exam(test_count, pass, "swap");
}