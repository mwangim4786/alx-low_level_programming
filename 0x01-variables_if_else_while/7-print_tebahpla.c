#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse.
 *
 * Return: Returns 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
