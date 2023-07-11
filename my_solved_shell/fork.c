#include "shell2.h"

/**
 * _fork - performs fork.
 *
 * Return: int.
 */

int _fork(void)
{
	int ch_pid = fork();

	return (ch_pid);
}

