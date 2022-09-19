#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_rev -print string in reverse
 *@s: parameter
 *Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar(10);
}
