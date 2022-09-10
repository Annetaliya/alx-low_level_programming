#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if n is greater than 5, 0 or less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98;

	srand(time(0));
	n = rand() - RAND_MAX / 2;	
	if (n > 5)
	{
		printf("Last digit of %d is 8 and is greater than 5\n", n);

	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{	
		printf("Last digit of %d is -8 and is less than 6 and not 0\n", n);
	}
	return (0);
}


