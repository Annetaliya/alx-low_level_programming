#include "main.h"
#include <string.h>

/**
 *_memcpy-copies a block of memory from one location to the other
 *@dest: second argument will be copied
 *@src: source memory block
 *@n:size of memory block in bytes
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
