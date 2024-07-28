#include "lib_tests.h"
#include "../../../ft_sum.c"

int	main(void)
{
    int i = 0;
    const int test = 5;
    int pass = 0;
    int ts[][5] = {{2, 10, 13, -52, 0}, 
                    {2, 1, 37, -5, -2}};
    int ts2[] = {4, 11, 50, -57, -2};

    while (i < test)
    {
        usleep(200000);
        if (ft_sum(ts[0][i], ts[1][i]) == ts2[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (%d, %d)\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[0][i], ts[1][i], ts2[i], ft_sum(ts[0][i], ts[1][i]));
        i++;
    }
    pass_or_fail(test, pass, "sum", 1);
}