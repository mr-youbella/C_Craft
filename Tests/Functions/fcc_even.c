#include "lib_tests.h"
#include "../../../ft_even.c"

int	main(void)
{
    int i = 0;
    const int test = 6;
    int pass = 0;
    int ts[] = {0, 5, 4, -25, -256, -13};
    int ts2[] = {1, 0, 1, 0, 1, 0};
    
    while (i < test)
    {
        usleep(200000);
        if (ft_even(ts[i]) == ts2[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "--------------------\n%d - Fault\nTest: (%d)\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_even(ts[i]));
        i++;
    }
    pass_or_fail(test, pass, "even", 2);
}