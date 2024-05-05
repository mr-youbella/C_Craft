#include "lib_tests.h"
#include "../../../ft_check_email.c"

int	main(void)
{
    int i = 0;
    const int test = 9;
    int pass = 0;
    char test[][25] = {"codingcraft@ccraft.com", "youbella@ccraft.com", "home@ccraft.comm", "@ccraft.com", "youbellaccraft.com", "gcc@ccraft.com", "ccraft@ccraft.com", "you bella@ccraft.com", "minecraft@mojang.com"};
    int result[] = {1, 1, 0, 0, 0, 0, 1, 0, 0};
    
    while (i < test)
    {
        usleep(200000);
        if (ft_check_email(test[i]) == result[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, test[i], result[i], ft_check_email(test[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_check_email.c");
}
