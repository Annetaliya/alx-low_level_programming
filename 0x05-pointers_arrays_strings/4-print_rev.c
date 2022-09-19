#include "main.h"

/**
 *print_rev -print string in reverse
 *@s: parameter
 *Return: nothing
 */

void print_rev(char *s)
{
	int j = 0;

	while (*(s + j) != '0')
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar(10);
}
