#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: argument count
 *@argv: array of strings
 *Return: if one of the numbers contains a symbol
 *that are non digits - 1 otherwise 0
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

		return (0);

}
