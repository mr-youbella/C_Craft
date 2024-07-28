#include "lib_tests.h"
#include "../../../ft_strlen.c"

int	main(void)
{
    int i = 0;
    const int test = 6;
    int pass = 0;
    char ts[][13] = {"Hello World!", "Youbella", "\tGreat", "1234", "0", ""};
    int ts2[] = {12, 8, 6, 4, 1, 0};

    while (i < test)
    {
        usleep(200000);
        if (ft_strlen(ts[i]) == ts2[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_strlen(ts[i]));
        i++;
    }
    pass_or_fail(test, pass, "strlen" 3);
}