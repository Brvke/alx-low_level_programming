#include "main.h"
/**
* append_text_to_file - a function that creates a file
* @filename: pointer to a string for the name of file
* @text_content: content to be printed inside the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int pcount;
	ssize_t txtlen;
	int file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (txtlen = 0; text_content[txtlen] != '\0' ; txtlen++)
		;
	pcount = write(file, text_content, txtlen);
	if (pcount == -1)
		return (-1);
	close(file);
	return (1);
}
