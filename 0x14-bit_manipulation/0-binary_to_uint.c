#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, k;
	unsigned int j;
	unsigned int res;
	const char *s = b;
	unsigned int sum;

	if (b == NULL)
		return (0);

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}

	while (*b != '\0')
	{
		b++;
	}
	b--;

	j = 0;
	sum = 0;

	while (b >= s)
	{
		i = *b - '0';
		res = (1 << j) * i;
		sum = sum + res;
		b--;
		j++;
	}
	return (sum);
}
