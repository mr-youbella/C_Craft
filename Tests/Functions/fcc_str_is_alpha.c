#include "lib_tests.h"
#include "../../../ft_str_is_alpha.c"

int	main(void)
{
    int i = 0;	
    char ts[][13] = {"Hello World!", "Youbella", "SchooL", "C1234", "42Dollar", "", "Tests"};
    int ts2[] = {0, 1, 1, 0, 0, -1, 1};
    
    while (i < 7)
    {
        usleep(200000);
        if (ft_str_is_alpha(ts[i]) == ts2[i])
            printf(split_line_passed, i + 1);
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_str_is_alpha(ts[i]));
        i++;
    }
}
