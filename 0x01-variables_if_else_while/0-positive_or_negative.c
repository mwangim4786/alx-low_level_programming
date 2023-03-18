#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - is the main function
 *
 * Return: always return zero (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%lu is positive\n", n);
	else if (n < 0)
		printf("%lu is negative\n", n);
	else
		printf("%lu is negative\n", n);
	return (0);
}