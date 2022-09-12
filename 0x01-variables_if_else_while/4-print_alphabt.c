#include <stdio.h>
/**
 * main- Print alphabets in lowercase except eq
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';
	for (low = 'a'; low <= 'z'; low++)
	if (low != e && low != q)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
