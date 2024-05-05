#include "lib_tests.h"
#include "../../../ft_fibonacci.c"

int	main(void)
{
    int i = 0;
    const int test = 9;
    int pass = 0;
    int test[] = {0, 1, 2, 5, -5, 7, 13, 21, -37};
    int result[] = {0, 1, 1, 5, -1, 13, 233, 10946, -1};
    
    while (i < test)
    {
        usleep(200000);
        if (ft_fibonacci(test[i]) == result[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "--------------------\n%d - Fault\nTest: (%d)\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, test[i], result[i], ft_fibonacci(test[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_fibonacci.c");
}