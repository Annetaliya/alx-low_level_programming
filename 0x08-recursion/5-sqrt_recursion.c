#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds sqrt of a number
 * @num: number to find sqrt
 * @root: the root to be tested
 * Return: if a number has a sqrt the sqrt.
 *-1 if the number is not a sqrt
 *
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion- returns natural square root
 * @n: The number to return the square root of
 *Return: if n has a natural square root, the sqrt of n
 *if n does not have a square root, -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	return (-1);

	if (n == 1)
	return (1);
	return (find_sqrt(n, root));
}
