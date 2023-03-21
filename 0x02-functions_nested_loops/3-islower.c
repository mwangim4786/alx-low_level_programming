#include "main.h"

/**
 * _islower - Check if character is lowercase.
 *
 * Return: 1 if character is lowercase, else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
