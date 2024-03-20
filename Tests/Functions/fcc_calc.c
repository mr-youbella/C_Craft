#include "lib_tests.h"
#include "../../../ft_calc.c"

int	main(void)
{
    int i = 0;	
    char nb1[][13] = {"13", "13", "1240", "123", "18", "150", "-150", "-1337"};
    char nb2[][13] = {"37", "-37", "5", "1234", "18", "2", "-160", " -++42Y13"};
    char op[] = {'+', '+', '/', '*', '/', '%', '-', '-'};
    int result[] = {50, -24, 248, 151782, 1, 0, 10, -1337};

    while (i < 8)
    {
        usleep(200000);
        if (ft_calc(nb1[i], op[i], nb2[i]) == result[i])
            printf(split_line_passed, i + 1);
        else 
            printf(ansi_red "---------------------\n%d - Fault\nTest: (\"%s\", '%c', \"%s\")\nExpected: %d\nbut got: %d\n---------------------\n" ansi_default, i + 1, nb1[i], op[i], nb2[i], result[i], ft_calc(nb1[i], op[i], nb2[i]));
        i++;
    }
}