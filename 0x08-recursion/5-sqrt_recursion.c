#include "main.h"

/**
 * check - returns square root
 * _sqrt_recursion - returns the natural square root of a number
 * @a:int
 * @b:int
 * Return: natural square root or -1
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
