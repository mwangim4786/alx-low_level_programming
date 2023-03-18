#include <stdio.h>

/**
 * main - Print alphabet in lowercase.
 *
 * Return: Returns 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
