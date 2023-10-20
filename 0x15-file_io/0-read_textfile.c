#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of the text file to be read
 * @letters: Number of letters that should be read and printed
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int check_read, check_written, file_desc;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters + 1); /* Allocate buff for reading */
	if (!buff)
		return (0);

	file_desc = open(filename, O_RDONLY); /* Open file for reading only */
	if (file_desc == -1)
	{
		free(buff);
		return (0);
	}

	bytes_read = read(file_desc, buff, letters); /* Read file into buffer */
	if (bytes_read == -1)
	{
		free(buff);
		close(file_desc);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, check_read);
	if (check_written == -1 || ((size_t)check_written != (size_t)check_read))
	{
		free(buff);
		close(file_desc);
		return (0);
	}

	free(buff);
	close(file_desc);

	return (check_written);
}
