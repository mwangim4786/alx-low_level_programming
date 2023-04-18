#include <stdio.h>

#ifndef __FILE__

#define __FILE__

#endif

/**
 * main - the mai function.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("File: %s\n", __FILE__);

	return (0);
}
