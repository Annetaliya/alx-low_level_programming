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
	(void)argv;
	if (argc > 0)

		printf("%d\n", argc - 1);
	return (0);
}
