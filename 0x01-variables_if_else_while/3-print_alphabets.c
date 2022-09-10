#include <stdio.h>
/**
 * main- Print alphabet in lower and uppercase
 * return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
