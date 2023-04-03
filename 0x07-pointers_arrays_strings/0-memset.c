#include "main.h"

/**
 * _memset - function
 *
 * @n: bytes of memory area pointed to by s
 *
 * @s: pointer to memory
 *
 * @b: constant
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, int n)
{
	int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
