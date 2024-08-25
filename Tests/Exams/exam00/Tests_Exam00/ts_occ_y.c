#include "exam00.h"
#include "../../../../../CC_Exam00/occ_y.c"

int	main(void)
{
    int i = 0;
    const int test_count = 5;
    int pass = 0;
    char test[5][10] = {"Youbellay", "YYYyyYYY", "C_Craft", "Younes", ""};
    int exp[] = {1, 6, 0, 1, 0};

    while (i < test_count)
    {
        if (occ_y(test[i]) == exp[i])
            pass++;
        i++;
    }
    exam(test_count, pass, "occ_y");
}