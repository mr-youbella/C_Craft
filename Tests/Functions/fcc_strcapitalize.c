#include "lib_tests.h"
#include "../../../ft_strcapitalize.c"

int	main(void)
{
    int i = 0;
    char str[][52] = {"heLLo worLd!", "you,bella", "Great", "hello, how are you ? 42words forty-two; 13You,bella", "i,m 18 years old", "c_craft program", "gOOD l+u c-k 4ever guys"};
    char old_str[][52] = {"heLLo worLd!", "you,bella", "Great", "hello, how are you ? 42words forty-two; 13You,bella", "i,m 18 years old", "c_craft program", "gOOD l+u c-k 4ever guys"};
    char result[][52] = {"Hello World!", "You,Bella", "Great", "Hello, How Are You ? 42words Forty-Two; 13you,Bella", "I,M 18 Years Old", "C_Craft Program", "Good L+U C-K 4ever Guys"};

    while (i < 7)
    {
        usleep(200000);
        if (strcmp(ft_strcapitalize(str[i]), result[i]) == 0)
            printf(split_line_passed, i + 1);
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\")\nExpected: \"%s\"\nbut got: \"%s\"\n---------------------\n" ansi_default, i + 1, old_str[i], result[i], ft_strcapitalize(str[i]));
        i++;
    }
}