#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * main- Displays the information in elf file
 * argc: argument counter
 * argv: argument vector
 * Return: 1 on Success, 0 on failure
 */
int main(int argc, char *argv)
{
	int fd;
	Elf64_Ehdr h;
	ssize_t b;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit 98;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]), exit(98);
	b = read(fd, &h, sizeof(h));
	if (h.e_indent[0] == 0x7f && h.e_indent[1] == 'E' && h.e_indent[2] == 'L' && h.e_indent[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);
	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abi(h);
	print_type(h);
	print_entry(h);
	if (close(fd))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);
	return (EXIT_SUCCESS);
}
