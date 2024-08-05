#include "lib_tests.h"
#include "../../../ft_lower_case.c"

int	main(void)
{
    int i = 0;
    const int test = 7;
    int pass = 0;
    char ts[][17] = {"Hello World!", "yOubELLA", "\tGreat", "1234", "I,M 18 YEARS OLD", "", "01+GOOD-10"};
    char tsc[][17] = {"Hello World!", "yOubELLA", "\tGreat", "1234", "I,M 18 YEARS OLD", "", "01+GOOD-10"};
    char ts2[][17] = {"hello world!", "youbella", "\tgreat", "1234", "i,m 18 years old", "", "01+good-10"};

    while (i < test)
    {
        char *str = ft_lower_case(ts[i]);
        usleep(200000);
        if (strcmp(str, ts2[i]) == 0)
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: \"%s\"\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 1, tsc[i], ts2[i], ft_lower_case(ts[i]));
        i++;
    }
    pass_or_fail(test, pass, "lower_case", 2);
}