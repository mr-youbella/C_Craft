#include "lib_tests.h"
#include "../../../ft_factorial.c"

int	main(void)
{
    int i = 0;
    const int test = 8;
    int pass = 0;	
    int ts[] = {5, -5, -13, 0, 10, 2, 1, 9};
    int ts2[] = {120, 0, 0, 1, 3628800, 2, 1, 362880};
    
    while (i < test)
    {
        usleep(200000);
        if (ft_factorial(ts[i]) == ts2[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (%d)\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_factorial(ts[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_factorial.c");
}