#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define ansi_red "\033[31m"
#define ansi_green "\033[32m"
#define ansi_blue "\033[34m"
#define ansi_bold "\033[1m"
#define ansi_default "\033[0m"
#define split_line_passed ansi_green "---------------------\n%d - Passed\n---------------------\n" ansi_default

void pass_or_fail(int test, int pass, char *name)
{
    if (test == pass)
        printf("\033[42;1m PASS \033[0m %s\n", name);
    else
        printf("\033[41;1m FAIL \033[0m %s\n", name);
}