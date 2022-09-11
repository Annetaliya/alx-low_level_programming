#include <stdio.h>
/**
 * main- Prints base of 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int i;

	for (num = 0; num <= 10; num++)
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(num);
	}
	{
		putchar(i);
	}
	return (0);
}
