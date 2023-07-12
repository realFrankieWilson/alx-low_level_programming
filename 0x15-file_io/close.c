#include "main.h"
/**
* close_fd -> closes file descpt.
* @fd: The file to be closed.
*
* Return: Nothing.
*/

void close_fd(int fd)
{
	int cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}