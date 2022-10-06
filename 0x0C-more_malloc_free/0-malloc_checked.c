#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked- function that allocates memory
 *@b: size of unsigned integer
 *
 *Return:nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(sizeof(b));

	if (mem == NULL)
		exit(98);

	return (mem);
}
