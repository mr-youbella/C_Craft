#include "lib_tests.h"
#include "../../../ft_atoi.c"

int	main(void)
{
    int i = 0;
    int pass = 0;
    const int test = 10;
    char ts[][20] = {"--42", "13Youbella50", "120", "-1598", "0", "++42", "   --++-+1325abcd", "   +254C", "\t\r1337", "\f\v7331"};
    int ts2[] = {0, 13, 120, -1598, 0, 0, 0, 254, 1337, 7331};

    while (i < test)
    {
        usleep(200000);
        if (ft_atoi(ts[i]) == ts2[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_atoi(ts[i]));
        i++;
    }
    pass_or_fail(test, pass, "atoi", 5);
}
