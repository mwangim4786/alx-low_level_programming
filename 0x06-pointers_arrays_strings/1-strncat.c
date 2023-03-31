#include "main.h"

/**
 * _strncat - concatenate 2 strings
 *
 * @str1: First string
 * @str2: Second string
 * @n: int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *str1, char *str2, int n)
{
	int i, j;

	for (i = 0; str1[i] != '\0'; i++)
	{
	}
	for (j = 0; str2[j] != '\0' && j < n; j++)
	{
		str1[i] = str2[j];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
