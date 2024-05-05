#include "lib_tests.h"
#include "../../../ft_index_letter.c"


int	main(void)
{
    int i = 0;
    const int test = 9;
    int pass = 0;	
    char ts[] = {'C', 'c', 'R', 'a', 'F', 't', ';', '-', '8'};
    int ts2[] = {3, 3, 18, 1, 6, 20, -1, -1, -1};

    while (i < test)
    {
        usleep(200000);
        if (ft_index_letter(ts[i]) == ts2[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: ('%c')\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, ts[i], ts2[i], ft_index_letter(ts[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_index_letter.c");
}