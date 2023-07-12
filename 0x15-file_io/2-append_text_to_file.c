#include "main.h"
/**
* append_text_to_file -> A function that appends text at the end of the file
* @filename: the name of file to be created
* @text_content: The content of text.
*
* Return: -1 if filename is NULL.
* 1 on success.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	/* declare and initialise the variable to store the file descpt. */
	int fd = 0, write_, i = 0;

	/* error handling */
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	write_ = write(fd, text_content, i);

	if (fd == -1 || write_ == -1)
		return (-1);
	close(fd);

	return (1);
}
