#include "shell2.h"

/**
 * split_line - splits line
 * @line: string pointer to be read.
 *
 * Return: pointer.
 */

char **split_line(char *line)
{
	char *token = NULL;
	int argc = 0, i = 0;
	char *line_cpy = NULL;
	char **argv = NULL;

	line_cpy = strdup(line);
	token = strtok(line_cpy, TOK_DELIM);

	while (token != NULL)
	{
		token = strtok(NULL, TOK_DELIM);
		argc++;
	}

	argv = malloc(sizeof(char *) * argc);
	token = strtok(line, TOK_DELIM);

	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, TOK_DELIM);
		i++;
	}
	argv[i] = NULL;
	free(line_cpy);

	return (argv);
}
