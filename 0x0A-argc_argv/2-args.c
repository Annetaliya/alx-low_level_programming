#include "main.h"
#include <stdio.h>

/**
 *main- entry point
 *@argc: argument count
 *@argv: array of strings
 *Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);
	return (0);
}
