#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main-  program that copies the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 0n Success , 0 on Failure
 */
int main(int argc, char *argv[])
{
	int from = 0, to = 0;
	ssize_t b;
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]),  exit(98);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
		exit(99);
	}
	while ((b = read(from, buf, 1024)) > 0)
		if (write(to, buf, b) != b)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
			exit(99);
		}
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]),  exit(98);
	from = close(from);
	to = close(to);
	free(buf);
	if (from)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from), exit(100);
	return (EXIT_SUCCESS);
}
