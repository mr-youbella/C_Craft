#include "lib_tests.h"
#include "../../../ft_strstr.c"

int	main(void)
{
    int i = 0;
    const int test = 9;
    int pass = 0;
    char str[][39] = {"Hello World!", "YouBella", "1234", "I,m 18 years old", "", "Good Luck", "Morocco is the best", "C Craft program corrects your exercise", "Empty Work"};
    char to_find[][17] = {"ll", "Be", "4", "18", "", " ", "the", "C Craft", ""};
    char result[][39] = {"llo World!", "Bella", "4", "18 years old", "", " Luck", "the best", "C Craft program corrects your exercise", "Empty Work"};

    while (i < test)
    {
        usleep(200000);
        if (ft_strstr(str[i], to_find[i]) == NULL)
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", \"%s\")\nExpected: \"%s\"\nbut got: NULL\n---------------------\n" ansi_default, i + 1, str[i], to_find[i], result[i]);
        else if (strcmp(ft_strstr(str[i], to_find[i]), result[i]) == 0)
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", \"%s\")\nExpected: \"%s\"\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 1, str[i], to_find[i], result[i], ft_strstr(str[i], to_find[i]));
        i++;
    }

    i = 0;
    char str1[][16] = {"\tGreat", "Coding Craft"};
    char to_find1[][8] = {"craft", "Codingg"};
    while (i < 2)
    {
        usleep(200000);
        if (ft_strstr(str1[i], to_find1[i]) == NULL)
        {
            printf(split_line_passed, i + 10);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", \'%s\')\nExpected: NULL\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 9, str1[i], to_find1[i], ft_strstr(str1[i], to_find1[i]));
        i++;
    }
    pass_or_fail(test + 2, pass, "strstr", 4);
}
