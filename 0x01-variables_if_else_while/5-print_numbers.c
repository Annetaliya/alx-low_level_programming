#include <stdio.h>
/**
 *main - Display numbers of base 10
 *return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	while (a < 10)
	{
		printf("%d", a);
		a = a + 1;
	}
	return (0);
}
