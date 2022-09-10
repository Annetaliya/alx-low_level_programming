#include <stdio.h>
/**
 * main - Entry point
 * return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);	     	
}	
