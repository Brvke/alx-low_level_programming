#include "main.h"
#define MAXSIZE 1024

/**
 * __exit - prints error messages and exits
 * @error: either the exit number or file descriptor
 * @str: name of either file_in or file_out
 * @fd: file descriptor
 *
 * Return: 0 on success
*/
int __exit(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}
/**
 * main - entry point ofr program
 *
 * @argc: count of arguments
 * @argv: array of argument strings
 *
 * Return: always retuns 0 if postive
*/

int main(int argc, char *argv[])
{
	ssize_t pcount, check_read, check_close;
	int ffrom, fto;
	char *buffer[MAXSIZE];

	if (argc != 3)
		__exit(97, NULL, 0);

	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
		__exit(98, argv[1], 0);

	fto = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fto == -1)
		__exit(99, argv[2], 0);

	while ((check_read = read(ffrom, buffer, MAXSIZE)) != 0)
	{
		if (check_read == -1)
			__exit(98, argv[1], 0);

		pcount = write(fto, buffer, check_read);
		if (pcount == -1)
			__exit(99, argv[2], 0);
	}

	check_close = close(ffrom);
	if (check_close == -1)
		__exit(100, NULL, ffrom);

	check_close = close(fto);
	if (check_close == -1)
		__exit(100, NULL, fto);

	return (0);
}
