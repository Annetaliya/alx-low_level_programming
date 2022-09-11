#include <stdio.h>
/**
 * main- Print numbers from 0 to 9
 *
 *return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 10);
	{
		putchar(num);
		num++;
	}
	return  (0);
}
