#include "main.h"

/**
 *swap_int - swaps the value of two integers
 *@a: parameter
 *@b: parameter
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
