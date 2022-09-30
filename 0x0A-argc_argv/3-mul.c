#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main- entry point
 *@argc: argument count
 *@argv: array of strings
 *Return: error if the program does not receive two arguments
 *and return 1.
 */

int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	mult *= atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);

}
