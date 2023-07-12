#include "main.h"
/**
* main -> copies the content of a file to another file.
* @argc: The number of arguments supplied
* @argv: An array of pointers to the arguments.
*
* Description: If the argument count is incorrect -> exit 97.
*				If file to cannot be created or written to -> exit 99.
*				If file to or file from cannot be closed -> exit 100.
*				If file from does not exist or cannot be read -> exit 98.
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int f, r, w, t;
	char *tmp;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	tmp = creat_temp(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, tmp, 1024);
	t = open(argv[2], CRT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(tmp);
			exit(98);
		}

		w = write(t, tmp, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[2]);
			free(tmp);
			exit(99);
		}

		r = read(f, tmp, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(tmp);
	close_fd(f);
	close_fd(t);
	return (0);
}

/**
* creat_temp -> creats a 1024 bytes for a buffer.
* @file: The name of the file temp is holding.
*
* Return: A pointer to the newlly created temp.
*/

char *creat_temp(char *file)
{
	char *temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (temp);
}

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
