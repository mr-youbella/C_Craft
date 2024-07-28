#include "lib_tests.h"
#include "../../../ft_sort_int_arr.c"

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

void print_array_nolen(int *arr, unsigned int len)
{
    unsigned int i = 0;
    printf("[");
    while (i < len)
    {
        printf("%d", arr[i]);
        if (i != len - 1)
            printf(" - ");
        i++;
    }
    printf("]");
}

int check(int *arr, unsigned int len, int *result, int i, int *oldarr)
{
    int pass = 0;
    usleep(200000);
    if (!ft_sort_int_arr(arr, len))
    {
        printf(ansi_red"---------------------\n%d - Fault\nTest: ", i);
        print_array(oldarr, len);
        printf("\nExpected: ");
        print_array_nolen(result, len);
        printf("\nbut got: NULL\n---------------------\n"ansi_default);
    }
    else if (memcmp(ft_sort_int_arr(arr, len), result, len * 4) == 0)
    {
        printf(split_line_passed, i);
        pass++;
    }
    else
    {
        printf(ansi_red"---------------------\n%d - Fault\nTest: ", i);
        print_array(oldarr, len);
        printf("\nExpected: ");
        print_array_nolen(result, len);
        printf("\nbut got: ");
        print_array_nolen(ft_sort_int_arr(arr, len), len);
        printf("\n---------------------\n"ansi_default);
    }
    return (pass);
}

int main(void)
{
    int arr1[2][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}};
    int arr1old[] = {1, 2, 3, 4};
    int arr2[2][4] = {{1, 3, 3, 7}, {1, 3, 3, 7}};
    int arr2old[] = {1, 3, 3, 7};
    int arr3[2][5] = {{15, 28, 30, 5, 13}, {5, 13, 15, 28, 30}};
    int arr3old[] = {15, 28, 30, 5, 13};
    int arr4[2][5] = {{122, 130, 42, 36, 10}, {10, 36, 42, 122, 130}};
    int arr4old[] = {122, 130, 42, 36, 10};
    int arr5[2][6] = {{1258, 15646, 1587416, 133, -145, -25}, {-145, -25, 133, 1258, 15646, 1587416}};
    int arr5old[] = {1258, 15646, 1587416, 133, -145, -25};
    int arr6[2][5] = {{-1256, -158, -42, -256, -50}, {-1256, -256, -158, -50, -42}};
    int arr6old[] = {-1256, -158, -42, -256, -50};
    int arr7[2][6] = {{7, 6, 3, 4, 2, 5}, {2, 3, 4, 5, 6, 7}};
    int arr7old[] = {7, 6, 3, 4, 2, 5};
    int arr8[2][4] = {{3, 3, 3, 3}, {3, 3, 3, 3}};
    int arr8old[] = {3, 3, 3, 3};

    int pass1 = check(arr1[0], 4, arr1[1], 1, arr1old);
    int pass2 = check(arr2[0], 4, arr2[1], 2, arr2old);
    int pass3 = check(arr3[0], 5, arr3[1], 3, arr3old);
    int pass4 = check(arr4[0], 5, arr4[1], 4, arr4old);
    int pass5 = check(arr5[0], 6, arr5[1], 5, arr5old);
    int pass6 = check(arr6[0], 5, arr6[1], 6, arr6old);
    int pass7 = check(arr7[0], 6, arr7[1], 7, arr7old);
    int pass8 = check(arr8[0], 4, arr8[1], 8, arr8old);
    int pass = pass1 + pass2 + pass3 + pass4 + pass5 + pass6 + pass7 + pass8;
    pass_or_fail(8, pass, "sort_int_arr", 5);
}