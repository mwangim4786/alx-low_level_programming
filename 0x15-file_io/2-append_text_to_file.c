#include "main.h"

/**
 * _strlen - gets string length.
 * @str: string pointer.
 * Return: string length.
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - appends text at the end of file.
 * @filename: name of file.
 * @text_content: NULL terminated string.
 * Return: 1 on success -1 on fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int _open;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	_open = open(filename, O_WRONLY | O_APPEND);
	if (_open == -1)
		return (-1);
	if (text_content != NULL)
		len = write(_open, text_content, _strlen(text_content));
	close(_open);
	if (len == -1)
		return (-1);
	return (1);
}
