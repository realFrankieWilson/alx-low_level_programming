#include "main.h"

/**
* creat_temp -> creats a 1024 bytes for a buffer.
* @file: The name of the file temp is holding.
*
* Return: A pointer to the newlly created temp.
*/

char *creat_temp(char *file)
{
	char *temp;
	temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (temp);
}
