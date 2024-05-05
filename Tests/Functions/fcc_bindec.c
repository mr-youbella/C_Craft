#include "lib_tests.h"
#include "../../../ft_bindec.c"

int	main(void)
{
    int i = 0;
    const int test = 7;
    int pass = 0;
    char ts[][13] = {"01010101", "00110100", "01110110", "10010110", "01ubella", "10201500", "101101100"};
    int ts2[] = {85, 52, 118, 150, -1, -1, -1};

    while (i < test)
    {
        usleep(200000);
        if (ft_bindec(ts[i]) == ts2[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_bindec(ts[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_bindec.c");
}