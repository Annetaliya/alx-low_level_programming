#include <stdio.h>
/**
 * main- Print alphabets from z to a
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
