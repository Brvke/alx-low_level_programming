#include "main.h"

/**
 * append_text_to_file - appends a text to a file.
 *
 * @filename: the name of the file to perform operation.
 * @text_content: the text to be appended.
 *
 * Return: length of the appended string if successful, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wcount, size;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";
	file = open(filename, O_APPEND | O_WRONLY);

	if (!file)
		return (-1);
	size = 0;
	while (text_content[size] != '\0')
		size++;

	wcount = write(file, text_content, size);

	if (wcount == -1 || wcount != size)
		return (-1);

	return (1);
}
