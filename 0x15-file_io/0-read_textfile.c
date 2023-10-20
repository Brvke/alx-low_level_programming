#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX stdout
 * @filename: is the name of the file to read
 * @letters: number of the letters to read and print from file
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_check, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	chexk_read = read(file, buffer, letters);
	if (check_read == -1)
		return (0);

	pcount = write(STDOUT_FILENO, buffer, check_read);
	if (pcount == -1 || check_read != pcount)
		return (0);

	free(buffer);

	close(file);

	return (wcount);
}
