#include <stdio.h>
/**
 * main- Prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
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
