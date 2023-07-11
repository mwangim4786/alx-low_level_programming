#include "shell2.h"

/**
 * read_line - function to read input from terminal.
 *
 * Return: pointer.
 */

char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t lineSize = 0;

	lineSize = getline(&line, &len, stdin);

	if (lineSize == -1)
	{
		if (feof(stdin))
		{
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(line);
			perror("error while reading the line from stdin");
			exit(EXIT_FAILURE);
		}
	}

	return (line);
}
