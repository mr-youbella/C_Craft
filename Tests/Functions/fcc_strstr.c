#include "lib_tests.h"
#include "../../../ft_strstr.c"

int	main(void)
{
    int i = 0;
    char str[][38] = {"Hello World!", "YouBella", "\tGreat", "1234", "I,m 18 years old", "", "Good Luck", "Morocco is the best", "C Craft program corrects your exercise", "Coding Craft"};
    char to_find[][17] = {"ll", "Be", "e", "4", "18", "", " ", "the", "C Craft", "Coding"};
    char result[][38] = {"llo World!", "Bella", "eat", "4", "18 years old", "", " Luck", "the best", "C Craft program corrects your exercise", "Coding Craft"};

    while (i < 10)
    {
        usleep(200000);
        if (strcmp(ft_strstr(str[i], to_find[i]), result[i]) == 0)
            printf(split_line_passed, i + 1);
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", \"%s\")\nExpected: \"%s\"\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 1, str[i], to_find[i], result[i], ft_strstr(str[i], to_find[i]));
        i++;
    }
}