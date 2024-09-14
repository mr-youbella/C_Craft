#include "lib_tests.h"
#include "../../../ft_strcmp.c"

int	main(void)
{
    int i = 0;
    const int test = 8;
    int pass = 0;
    char s1[][13] = {"Hello World!", "Youbella", "\tGreat", "123", "Hello", "", "Good Luck", "CCrafting"};
    char s2[][13] = {"Hello World!", "Youbella", "\tGrea", "1234", "Hello\n", "", "Good luck", "CCraft"};
    int result[] = {0, 0, 116, -52, -10, 0, -32, 105};

    while (i < test)
    {
        usleep(200000);
        if (result[i] == 0 && ft_strcmp(s1[i], s2[i]) == 0)
        {
                printf(split_line_passed, i + 1);
                pass++;
        }
        else if (result[i] > 0 && ft_strcmp(s1[i], s2[i]) > 0)
        {
                printf(split_line_passed, i + 1);
                pass++;
        }
        else if (result[i] < 0 &&ft_strcmp(s1[i], s2[i]) < 0)
        {
                printf(split_line_passed, i + 1);
                pass++;
        }
        else 
        {
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", \"%s\")\nExpected: ", i + 1, s1[i], s2[i]);
            if (result[i] == 0)
                printf("== 0");
            else if (result[i] < 0)
                printf("< 0");
            else if (result[i] > 0)
                printf("> 0");
            printf("\nbut got: %d\n---------------------\n" ansi_default, ft_strcmp(s1[i], s2[i]));
        }
        i++;
    }
    pass_or_fail(test, pass, "strcmp", 3);
}