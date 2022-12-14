#include "main.h"
#include <stdlib.h>

/**
 *array_range- function that creates an array of integers
 *@min: starting point of the array
 *@max: ending point of the arry
 *
 *Return: if malloc fails NULL or min > max
 * otherwise pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)

	return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
