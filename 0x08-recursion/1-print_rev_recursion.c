#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s:string
 * Return:void
 */
void _print_rev_recursion(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		_print_rev_recursion(s + 1);
	}
}
