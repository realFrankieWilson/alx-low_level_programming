#include "main.h"

/**
* read_textfile -> A function that reads a text file and prints
* to the POSIX stdout.
* @filename: The name of file to read.
* @letters: the letters to be read.
*
* Return: 0 if the file can not be open or read.
* or if the filename is NULL. Or fails to write.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, tmp, letters);
	w = write(STDOUT_FILENO, tmp, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(tmp);
		return (0);
	}

	free(tmp);
	close(o);
	return (w);
}
