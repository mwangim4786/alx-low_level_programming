#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: pointer to name of file.
 * @letters: No. of letters the function reads and prints.
 * Return: Actual number of letters printed or 0 if the
 * function fails or filename is NULL
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *no_of_letters;

	if (filename == NULL)
	{
		return (0);
	}

	no_of_letters = malloc(sizeof(char) * letters);
	if (no_of_letters == NULL)
	{
		return (0);
	}

	_open = open(filename, O_RDONLY);
	_read = read(_open, no_of_letters, letters);
	_write = write(2, no_of_letters, _read);

	if (_open == -1 || _read == -1 || _write == -1 || _write != _read)
	{
		free(no_of_letters);
		return (0);
	}

	if(_write !== no_of_letters)
		return (0);

	free(no_of_letters);
	close(_open);

	return (_write);
}
