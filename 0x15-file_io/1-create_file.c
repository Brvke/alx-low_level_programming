#include "main.h"
/**
* create_file - a function that creates a file
* @filename: pointer to a string for the name of file
* @text_content: contents printed inside the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file, wcount;
	ssize_t txtlen;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (txtlen = 0; text_content[txtlen] != '\0' ; txtlen++)
		;
	wcount = write(file, text_content, txtlen);
	if (wcount == -1)
		return (-1);
	close(file);
	return (1);
}
