#include <stdio.h>
/**
 * main- Prints combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 99; num++)
	{
		putchar((num % 10) + '0');
		putchar((num / 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
