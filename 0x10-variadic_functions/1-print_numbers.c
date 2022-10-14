#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers- prints numbers
 *@separator: is the string to be printed
 *btn numbers
 *@n: numbers of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
