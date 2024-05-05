#include "lib_tests.h"
#include "../../../ft_value_ascii.c"


int	main(void)
{
    int i = 0;
    const int test = 8;
    int pass = 0;
    char ts[] = {'a', 'C', 'Y', '+', ';', '.', '{', '8'};
    int ts2[] = {97, 67, 89, 43, 59, 46, 123, 56};

    while (i < test)
    {
        usleep(200000);
        if (ft_value_ascii(ts[i]) == ts2[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: ('%c')\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_value_ascii(ts[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_value_ascii.c");
}