#include "main.h"

/**
 *get_bit - function that returns the position of a bit
 *@n: The bit
 *@index: position of the bit
 *Return: the value of the index 0r -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
