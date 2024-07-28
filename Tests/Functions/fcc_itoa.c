#include "lib_tests.h"
#include "../../../ft_itoa.c"

int main(void)
{
    int i = 0;
    const int test = 9;
    int pass = 0;
    int test[9] = {1337, 42, 18, -13, +37, -+4, +-2, -+-+2024, 0};
    char result[9][5] = {"1337", "42", "18", "-13", "37", "-4", "-2", "2024", "0"};

    while (i < test)
    {
        usleep(200000);
        if (strcmp(ft_itoa(test[i]), result[i]) == 0)
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else
            printf(ansi_red"---------------------\n%d - Fault\nTest: (%d)\nExpected: %s\nbut got: %s\n---------------------\n"ansi_default, i + 1, test[i], result[i], ft_itoa(test[i]));
        i++;
    }
    pass_or_fail(test, pass, "itoa", 5);
}