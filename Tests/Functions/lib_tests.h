#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define ansi_red "\033[31m"
#define ansi_green "\033[32m"
#define ansi_blue "\033[34m"
#define ansi_bold "\033[1m"
#define ansi_default "\033[0m"
#define split_line_passed ansi_green "---------------------\n%d - Passed\n---------------------\n" ansi_default

void pass_or_fail(int test, int pass, char *name, int pn)
{
    if (test == pass)
    {
        const char *home = getenv("HOME");
        char path[1337];
        snprintf(path, sizeof(path), "%s/C_Craft/Tests/Level/%s", home, name);
        FILE *file = fopen(path, "w");
        fprintf(file, "%d", pn);
        fclose(file);
        printf("\033[42;1m PASS \033[0m ft_%s.c\n\033[32m+ %d points\033[0m\n", name, pn);
    }
    else
        printf("\033[41;1m FAIL \033[0m ft_%s.c\n", name);
}