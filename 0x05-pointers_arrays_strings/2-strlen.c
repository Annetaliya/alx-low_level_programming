#include "main.h"

/**
 *_strlen - Returns the length of a string
 *@s: string
 *
 *Return: returns length as integer
 */

int _strlen(char *s)
{
	int m = 0;

	while (*(s + m))
		m++;
	return (m);
}
