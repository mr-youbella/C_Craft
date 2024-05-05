#include "lib_tests.h"
#include "../../../ft_str_rev.c"

int	main(void)
{
    int i = 0;
    const int test = 7;
    int pass = 0;
    char const str[][20] = {"Hello World!", "Youbella", "Great", "1234", "I,m 18 years old", "reverse 42 time", "Good Luck"};
    char result[][20] = {"!dlroW olleH", "allebuoY", "taerG", "4321", "dlo sraey 81 m,I", "emit 24 esrever", "kcuL dooG"};

    while (i < test)
    {
        usleep(200000);
        if (strcmp(ft_str_rev(str[i]), result[i]) == 0)
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: \"%s\"\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 1, str[i], result[i], ft_str_rev(str[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_str_rev.c");
}