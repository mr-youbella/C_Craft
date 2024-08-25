#include "exam00.h"
#include "../../../../../CC_Exam00/inc.c"

int	main(void)
{
    int i = 0;
    const int test_count = 5;
    int pass = 0;
    int test[] = {2, 10, 13, -52, -1};
    int exp[] = {3, 11, 14, -51, 0};

    while (i < test_count)
    {
        ft_inc(&test[i]);
        if (test[i] == exp[i])
            pass++;
        i++;
    }
    exam(test_count, pass, "inc");
}