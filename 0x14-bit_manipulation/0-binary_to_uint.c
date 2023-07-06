#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary no. to an unsigned ineger.
 * @b: pointer to a string of 1s and 0s.
 *
 * Return: converted no. or 0 where string not 1 | 0).
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		j = 2 * j + b[i] - '0';
	}

	return (j);
}
