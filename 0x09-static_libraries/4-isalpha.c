#include "main.h"

/**
 * _isalpha - Check if a character is alphabet.
 * @c: The character to be checked.
 *
 * Return: 1 if character is alphabet, lowercase or uppercase, else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
