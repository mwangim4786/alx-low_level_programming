#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @str1:char
 * @str2:char
 * Return:char
 */
char *_strcat(char *str1, char *str2)
{
	int i, j;

	for (i = 0; str1[i] != '\0'; i++)
	{
	}
	for (j = 0; str2[j] != '\0'; j++)
	{
		str1[i] = str2[j];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
