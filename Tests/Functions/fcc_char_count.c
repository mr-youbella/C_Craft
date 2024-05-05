#include "lib_tests.h"
#include "../../../ft_char_count.c"

int	main(void)
{
    int i = 0;
    const int test = 7;
    int pass = 0;
    char str[][22] = {"Hello World!", "Youbella", "Good Luck", "1337", "Enjoy", "gdoddoddd ldddduckd", "C-C-r-a-f-t"};
    char c[] = {'l', 'Y', ' ', '3', 'M', 'd', '-'};
    int result[] = {3, 1, 1, 2, 0, 11, 5};

    while (i < test)
    {
        usleep(200000);
        if (ft_char_count(str[i], c[i]) == result[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", \'%c\')\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, str[i], c[i], result[i], ft_char_count(str[i], c[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_char_count.c");
}