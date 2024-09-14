#include "lib_tests.h"
#include "../../../ft_striteri.c"

void	printCode_even(void);
void	printCode_odd(void);
void	printCode_plus_one(void);
void	printCode_spaceTo_(void);
void	printCode_lower_case(void);

void	even(unsigned int i, char *c);
void	odd(unsigned int i, char *c);
void	plus_one(unsigned int i, char *c);
void	spaceTo_(unsigned int i, char *c);
void	lower_case(unsigned int i, char *c);

int main(void)
{
	void (*funs[])(unsigned int, char*) = {even, odd, plus_one, spaceTo_, lower_case};
	void (*printCode[])(void) = {printCode_even, printCode_odd, printCode_plus_one, printCode_spaceTo_, printCode_lower_case};
	int i = 0;
	int pass = 0;
	const char funs_name[6][20] = {"even", "odd", "plus_one", "spaceTo_", "lower_case"};
	char tests[6][20] = {"Youbella", "C_Craft", "1337", " Coding Craft ", "GitHub"};
	const char old_tests[6][20] = {"Youbella", "C_Craft", "1337", " Coding Craft ", "GitHub"};
	const char result[6][20] = {"2o2b2l2a", "C1C1a1t", "2448", "_Coding_Craft_", "github"};
	while (i < 5)
	{
		usleep(200000);
		ft_striteri(tests[i], funs[i]);
		if (strcmp(tests[i], result[i]) == 0)
		{
            printf(split_line_passed, i + 1);
			pass++;
		}
		else
		{
			printf(ansi_red "------------------------------------------\n%d - Fault\n" ansi_default, i + 1);
			printCode[i]();
            printf(ansi_red "\nTest: (\"%s\", %s)\nExpected: %s\nbut got: %s\n------------------------------------------\n" ansi_default, old_tests[i], funs_name[i], result[i], tests[i]);
		}
		i++;
	}
    pass_or_fail(5, pass, "striteri", 6);
}

void	printCode_even(void)
{
	printf("void	even(unsigned int i, char *c)\n{\n\tif (i %% 2 == 0)\n\t\t*c = '2';\n}\n");
}
void	printCode_odd(void)
{
	printf("void	odd(unsigned int i, char *c)\n{\n\tif (i %% 2 != 0)\n\t\t*c = '1';\n}\n");
}
void	printCode_plus_one(void)
{
	printf("void	plus_one(unsigned int i, char *c)\n{\n\tif (*c >= '0' && *c <= '9')\n\t\t*c += 1;\n}\n");
}
void	printCode_spaceTo_(void)
{
	printf("void	spaceTo_(unsigned int i, char *c)\n{\n\tif (*c == 32)\n\t\t*c = '_';\n}\n");
}
void	printCode_lower_case(void)
{
	printf("void	lower_case(unsigned int i, char *c)\n{\n\tif (*c >= 'A' && *c <= 'Z')\n\t\t*c += 32;\n}\n");
}

void	even(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = '2';
}
void	odd(unsigned int i, char *c)
{
	if (i % 2 != 0)
		*c = '1';
}
void	plus_one(unsigned int i, char *c)
{
	i++;
	if (*c >= '0' && *c <= '9')
		*c += 1;
}
void	spaceTo_(unsigned int i, char *c)
{
	i++;
	if (*c == 32)
		*c = '_';
}
void	lower_case(unsigned int i, char *c)
{
	i++;
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}
