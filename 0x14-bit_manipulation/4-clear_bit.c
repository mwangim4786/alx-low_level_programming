#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: value
 * @index: index
 * Return: 1 if success, or -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
