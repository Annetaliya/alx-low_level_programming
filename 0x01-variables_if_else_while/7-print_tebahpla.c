#include <stdio.h>
/**
 * main- Print alphabets from z to a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	return (0);
}
