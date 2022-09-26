#include "main.h"
#include <string.h>

/**
 *_strpbrk-searches a string for any of a set of byte
 *@s:string to search
 *@accept:thee character to be located
 *Return: if no byte is found return null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

