#include "main.h"

/**
 *binary_to_uint - function that converts binary to int
 *@b: pointer to string
 *
 *Return:the converted number or 0 if string is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
