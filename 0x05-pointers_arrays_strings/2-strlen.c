#include "main.h"
/**
 * _strlen - return the length of a string
 * @str: char
 * Return: 0 on success
 */
int _strlen(char *str)
{
	int a = 0;

	for (; *str++;)
		a++;
	return (a);
}
