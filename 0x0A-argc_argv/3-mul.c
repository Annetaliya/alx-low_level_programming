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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
