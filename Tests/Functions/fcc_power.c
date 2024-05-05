#include "lib_tests.h"
#include "../../../ft_power.c"

int	main(void)
{
    int i = 0;
    const int test = 7;
    int pass = 0;
    int ts[][7] = {{2, 10, 13, -52, -5, 350, -25}, 
                    {2, 4, 6, 5, 0, -5, -1}};
    int ans[] = {4, 10000, 4826809, -380204032, 1, -1, -1};

    while (i < test)
    {
        usleep(200000);
        if (ft_power(ts[0][i], ts[1][i]) == ans[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (%d, %d)\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[0][i], ts[1][i], ans[i], ft_power(ts[0][i], ts[1][i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_power.c");
}