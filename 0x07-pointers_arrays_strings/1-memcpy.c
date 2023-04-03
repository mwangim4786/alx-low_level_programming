#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 *
 * @n: int
 *
 * @src: memory source
 *
 * @dest: destination memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
