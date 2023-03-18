#include <stdio.h>

/**
 * main - Single digit numbers of base 10 from 0
 *        
 *
 * Return: Returns 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
