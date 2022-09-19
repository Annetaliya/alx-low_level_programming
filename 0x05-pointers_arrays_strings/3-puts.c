#include "main.h"

/**
 *_puts - prints a string followed by a new line
 *@str: parameter
 *Return: nothing
 */

void _puts(char *str)
{
	int k = 0;

	while (*(str + k))
	{
		_putchar(*(str + k));
	}
	_putchar('\n');
}
