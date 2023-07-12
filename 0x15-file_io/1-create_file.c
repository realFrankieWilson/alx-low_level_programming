#include "main.h"
/**
* create_file -> A function that creates a file
* @filename: the name of file to be created
* @text_content: The content of text.
*
* Description: The created file must have the permisions: rw-------. if
* the file already exist, do not change the permissions.
*
* Return: -1 if filename is NULL.
* 1 on success.
*/

int create_file(const char *filename, char *text_content)
{
	/* declare and initialise the variable to store the file descpt. */
	int fd = 0, write_, i = 0;

	/* error handling */
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[i++];)
			;
	}

	/**
	 * int open(const char *pathname, int flags, mode_t mode);
	* Trunc-> truncates the lenght of an existed regular file
	* with RDWR or RWONLY Access to length 0
	*/

	fd = open(filename, CRT | RW | O_TRUNC, 0600);
	write_ = write(fd, text_content, i);

	if (fd == -1 || write_ == -1)
		return (-1);
	close(fd);

	return (1);
}
