#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to file's name.
 * @letters: No. of letters the function reads and prints.
 * Return: 0 if the function fails or filename is NULL
 * Actual number of letters printed.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *check_letter;

	if (filename == NULL)
		return (0);

	check_letter = malloc(sizeof(char) * letters);
	if (check_letter == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, check_letter, letters);
	w = write(STDOUT_FILENO, check_letter, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(check_letter);
		return (0);
	}

	free(check_letter);
	close(o);

	return (w);
}
