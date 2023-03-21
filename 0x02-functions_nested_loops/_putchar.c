#include <unistd.h>

/**
 * _putchar - Prints character c to stdout.
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
