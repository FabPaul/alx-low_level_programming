#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Function that creates a file
 * @filename: The name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 if success and -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, num = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (*(text_content + num) != '\0')
		{
			num++;
		}

		if (write(fd, text_content, num) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
