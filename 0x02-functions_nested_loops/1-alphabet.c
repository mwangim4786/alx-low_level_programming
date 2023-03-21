#include "main.h"

/**
 * main - Print characters _putchar
 * Return: Always returns 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
