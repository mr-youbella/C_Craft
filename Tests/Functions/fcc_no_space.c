#include "lib_tests.h"
#include "../../../ft_no_space.c"

int	main(void)
{
    int i = 0;
    char const str[][20] = {"Hello World!", "You   be  lla  ", "Great", "1234", "I,m 18 years old", "", "Good L u c k"};
    char result[][20] = {"HelloWorld!", "Youbella", "Great", "1234", "I,m18yearsold", "", "GoodLuck"};

    while (i < 7)
    {
        usleep(200000);
        if (strcmp(ft_no_space(str[i]), result[i]) == 0)
            printf(split_line_passed, i + 1);
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: \"%s\"\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 1, str[i], result[i], ft_no_space(str[i]));
        i++;
    }
}