#include "main.h"
#include <stdlib.h>

/**
 *create_array- creates an array of char
 *and initializes it with a special character
 *@size: the size of the array to be initialized
 *@c: specific cha to initialize the array
 *
 *Return:if size is 0 or the function fails - NULL
 * otherwise a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);

}
