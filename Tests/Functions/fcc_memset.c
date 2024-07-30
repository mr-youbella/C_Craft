#include "lib_tests.h"
#include "../../../ft_memset.c"

void print_arr(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
		if (i != size)
			printf(", ");
	}
}

int main(void)
{
	int i = 0, pass = 0;
	int test_int[] = {13, 37, 42};
	int c[] = {1, 2, 5};
	size_t len[] = {0, 1, 3};
	int result[] = {13, 2, 328965};
	while (i < 3)
	{
		usleep(200000);
		int *p = ft_memset(&test_int[i], c[i], len[i]);
        if (*p == result[i])
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "--------------------\n%d - Fault\nint ts;\nTest: (ts, %d, %ld)\nExpected: ts = %d;\nbut got: ts = %d;\n---------------------\n" ansi_default, i + 1, c[i], len[i], result[i], *p);
        i++;
	}
	int j = 0;
	char tests[][13] = {"Youbella", "Coding Craft", "11337", "good luck"};
	char tests_old[][13] = {"Youbella", "Coding Craft", "11337", "good luck"};
	char ch[] = {'Y', 'k', '+', '3'};
	size_t length[] = {8, 0, 1, 4};
	char result_str[][13] = {"YYYYYYYY", "Coding Craft", "+1337", "3333 luck"};
	while (j < 4)
	{
		usleep(200000);
		char *cha = ft_memset(tests[j], ch[j], length[j]);
        if (memcmp(cha, result_str[j], sizeof(tests[j])) == 0)
        {
            printf(split_line_passed, i + 1);
            pass++;
        }
        else 
            printf(ansi_red "--------------------\n%d - Fault\nchar str = \"%s\";\nTest: (str, '%c', %ld)\nExpected: str = \"%s\";\nbut got: str = \"%s\";\n---------------------\n" ansi_default, i + 1, tests_old[j], ch[j], length[j], result_str[j], cha);
        j++;
		i++;
	}
	usleep(200000);
	int test_arr[] = {13, 37, 42};
	int test_arr_result[] = {1, 37, 42};
	int *p1 = ft_memset(test_arr, 1, 1);
	if (memcmp(p1, test_arr_result, 4) == 0)
	{
		printf(split_line_passed, i + 1);
        pass++;
	}
	else
	{
		printf(ansi_red "--------------------\n%d - Fault\nint arr[] = {13, 37, 42};\nTest: (arr, 1, 1)\nExpected: arr = {", i + 1);
		print_arr(test_arr_result, 3);
		printf("};\nbut got: arr = {");
		print_arr(p1, 3);
		printf("};\n---------------------\n" ansi_default);
	}
	i++;
	usleep(200000);
	int test_arr1[] = {13, 37, 42};
	int test_arr_result1[] = {218959117, 218959117, 218959117};
	int *p2 = ft_memset(test_arr1, 13, 12);
	if (memcmp(p2, test_arr_result1, 4) == 0)
	{
		printf(split_line_passed, i + 1);
        pass++;
	}
	else
	{
		printf(ansi_red "--------------------\n%d - Fault\nint arr[] = {13, 37, 42};\nTest: (arr, 13, 12)\nExpected: arr = {", i + 1);
		print_arr(test_arr_result1, 3);
		printf("};\nbut got: arr = {");
		print_arr(p2, 3);
		printf("};\n---------------------\n" ansi_default);
	}
	i++;
	usleep(200000);
	int test_arr2[] = {13, 37, 42};
	int test_arr_result2[] = {13, 37, 42};
	int *p3 = ft_memset(test_arr2, 5, 0);
	if (memcmp(p3, test_arr_result2, 4) == 0)
	{
		printf(split_line_passed, i + 1);
        pass++;
	}
	else
	{
		printf(ansi_red "--------------------\n%d - Fault\nint arr[] = {13, 37, 42};\nTest: (arr, 5, 0)\nExpected: arr = {", i + 1);
		print_arr(test_arr_result2, 3);
		printf("};\nbut got: arr = {");
		print_arr(p3, 3);
		printf("};\n---------------------\n" ansi_default);
	}
	pass_or_fail(10, pass, "memset", 4);
}