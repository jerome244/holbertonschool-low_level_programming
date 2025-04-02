#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}


/**
 * append_text_to_file - appends text to a file
 * @filename: string name of file to append text to
 * @text_content: string to append
 * Return: Success(1), Error(-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, written = 0;
	size_t len = _strlen(text_content);

	if (filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
	{
		written = write(fd, text_content, len);
	}
	close(fd);
	return (written == len ? 1 : -1);
}
