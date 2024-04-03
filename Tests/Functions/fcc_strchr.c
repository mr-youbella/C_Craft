#include "lib_tests.h"
#include "../../../ft_strchr.c"

int	main(void)
{
    int i = 0;
    char str[][39] = {"Hello World!", "YouBella", "1234", "I,m 18 years old", "", "Good Luck", "Morocco is the best", "C Craft program corrects your exercise"};
    char c[] = {'W', 'B', '2', ' ', '\0', 'L', 'o', 'p'};
    char result[][39] = {"World!", "Bella", "234", " 18 years old", "\0", "Luck", "orocco is the best", "program corrects your exercise"};

    while (i < 8)
    {
        usleep(200000);
        if (strcmp(ft_strchr(str[i], c[i]), result[i]) == 0)
            printf(split_line_passed, i + 1);
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", \'%c\')\nExpected: \"%s\"\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 1, str[i], c[i], result[i], ft_strchr(str[i], c[i]));
        i++;
    }

    i = 0;
    char str1[][16] = {"\tGreat", "Coding Craft"};
    char c1[] = {'h', 'Y'};
    while (i < 2)
    {
        usleep(200000);
        if (ft_strchr(str1[i], c1[i]) == NULL)
            printf(split_line_passed, i + 9);
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", \'%c\')\nExpected: NULL\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 9, str1[i], c1[i], ft_strchr(str1[i], c1[i]));
        i++;
    }
}