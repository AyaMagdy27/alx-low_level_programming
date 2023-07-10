#include "main.h"

/**
 * _strlen- Return the length of a string
 *  @s: the string that length to check
 *  Return: integer length of the string
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
 * create_file- creates a file
 * @filename: pointer the name of the file to create
 * @text_content: pointer to string to write to the file
 *
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, leng = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (leng)
		bytes = write(fd, text_content, leng);
	close(fd);
	return (bytes == leng ? 1 : -1);
}
