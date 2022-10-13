#include "function_pointers.h"

/**
 *array_iterator- takes an array as parameter
 *@array: pointer to adress of first element
 *@size: size of the array
 *@action: pointer to function
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
