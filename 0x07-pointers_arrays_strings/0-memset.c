#include "main.h"
#include <string.h>

/**
 *_memset- sets a one byte value to a mememory
 *@s: location where memory will be set
 *@b: value that is to be copied in the memory block
 *@n: number of byte which will be set
 *Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
