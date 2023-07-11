#include "shell2.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - main function
 *
 * Return: Always 0.
 */

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		interactive_shell();
	}
	else
	{
		non_interactive_shell();
	}

	return (0);
}
