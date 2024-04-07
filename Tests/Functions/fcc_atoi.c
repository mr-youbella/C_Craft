#include "lib_tests.h"
#include "../../../ft_atoi.c"

int	main(void)
{
    int i = 0;	
    char ts[][20] = {"Hello World!", "13Youbella50", "120", "-1598", "0", "", "   --++-+1325abcd", "   +254C", "\t\r1337", "\f\v7331"};
    int ts2[] = {0, 13, 120, -1598, 0, 0, 0, 254, 1337, 7331};

    while (i < 10)
    {
        usleep(200000);
        if (ft_atoi(ts[i]) == ts2[i])
            printf(split_line_passed, i + 1);
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_atoi(ts[i]));
        i++;
    }
}
