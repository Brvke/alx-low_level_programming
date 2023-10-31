#include "main.h"
#define MAXSIZE 1024

/**
 * __exit - prints error messages and exits with exit number
 * @error: either the exit number or file descriptor
 * @str: name of either file_in or file_out
 * @fd: file descriptor
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
 * @argc: count of arguments
 * @argv: array of argument strings
 * Return: always retuns 0 if postive
*/

int main(int argc, char *argv[])
{
	ssize_t wcount, read_check, close_check;
	int filefrom, fileto;
	char *buffer[MAXSIZE];

	if (argc != 3)
		__exit(97, NULL, 0);

	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
		__exit(98, argv[1], 0);

	fileto = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fileto == -1)
		__exit(99, argv[2], 0);

	while ((read_check = read(filefrom, buffer, MAXSIZE)) != 0)
	{
		if (read_check == -1)
			__exit(98, argv[1], 0);

		wcount = write(fileto, buffer, read_check);
		if (wcount == -1)
			__exit(99, argv[2], 0);
	}

	close_check = close(filefrom);
	if (close_check == -1)
		__exit(100, NULL, filefrom);

	close_check = close(fileto);
	if (close_check == -1)
		__exit(100, NULL, fileto);

	return (0);
}
