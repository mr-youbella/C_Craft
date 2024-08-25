#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void exam(int test, int pass, char *name)
{
	const char *home = getenv("HOME");
	char path[1337];
	snprintf(path, sizeof(path), "%s/C_Craft/Tests/Exams/exam00/Tests_Exam00/%s", home, name);
	FILE *f = fopen(path, "w");
	if (test == pass)
		fprintf(f, "1");
	else 
		fprintf(f, "0");
	fclose(f);
}