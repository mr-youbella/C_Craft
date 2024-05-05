#include "lib_tests.h"
#include "../../../ft_saverge.c"

int	main(void)
{
    int i = 0;
    const int test = 7;
    int pass = 0;
    float mt[] = {20, 9, 0, -5, 20.10, 13, 10};
    float pc[] = {20, 2, 0, 0, 12.5, 10.45, 10};
    float en[] = {20, 9, 0, 10, 12, 15.85, 10};
    float ph[] = {20, 4, 0, 12, 15, 20, 10};
    float ts[] = {100, 30.909091, 0, -1, -1, 70.477280, 50};

    while (i < test)
    {
        usleep(200000);
        if (ft_saverge(mt[i], pc[i], en[i], ph[i]) == ts[i])
        {
            printf(split_line_passed, i + 1);
            pass;
        }
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (%.2f, %.2f, %.2f, %.2f)\nExpected: %.2f\nbut got: %.2f\n---------------------\n" ansi_default, i + 1, mt[i], pc[i], en[i], ph[i], ts[i], ft_saverge(mt[i], pc[i], en[i], ph[i]));
        i++;
    }
    pass_or_fail(test, pass, "ft_saverge.c");
}
