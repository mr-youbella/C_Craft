#include "lib_tests.h"
#include "../../../ft_min_num.c"

void print_array(int *arr, unsigned int len)
{
    unsigned int i = 0;
    printf("([");
    while (i < len)
    {
        printf("%d", arr[i]);
        if (i != len - 1)
            printf(" - ");
        i++;
    }
    printf("], %i)", len);
}

void check(int *arr, unsigned int len, int result, int i)
{
    usleep(200000);
    if (ft_min_num(arr, len) == result)
        printf(split_line_passed, i);
    else
    {
        printf(ansi_red"---------------------\n%d - Fault\nTest: ", i);
        print_array(arr, len);
        printf("\nExpected: %d\nbut got: %d\n---------------------\n"ansi_default, result, ft_min_num(arr, len));
    }
}

int main(void)
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {1, 3, 3, 7};
    int arr3[] = {15, 28, 30, 5, 13};
    int arr4[] = {122, 130, 42, 36, 10};
    int arr5[] = {1258, 15646, 1587416, 133, -145, -25};
    int arr6[] = {-1256, -158, -42, -256, -50};
    int arr7[] = {};
    check(arr1, 4, 1, 1);
    check(arr2, 4, 1, 2);
    check(arr3, 5, 5, 3);
    check(arr4, 5, 10, 4);
    check(arr5, 6, -145, 5);
    check(arr6, 5, -1256, 6);
    check(arr7, 0, 0, 7);
}