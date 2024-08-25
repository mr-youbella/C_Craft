#include "exam00.h"
#include "../../../../../CC_Exam00/subtract.c"

int	main(void)
{
    int i = 0;
    const int test_count = 5;
    int pass = 0;
    int test[] = {2, 11, 37, -52, 5};
    int a[] = {3, 10, 13, -1337, -1};
    int exp[] = {-1, 1, 24, 1285, 6};

    while (i < test_count)
    {
        ft_subtract(&test[i], a[i]);
        if (test[i] == exp[i])
            pass++;
        i++;
    }
    exam(test_count, pass, "subtract");
}