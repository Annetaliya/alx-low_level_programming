#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function that adds numbers
 *@n: the number of arguments
 *
 *Return: value of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);

}
