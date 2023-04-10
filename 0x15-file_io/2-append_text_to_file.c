#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Function that appends text at the start of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t len;

	if (!filename)
	{
		return (-1);
	}

	fp = fopen(filename, "a");

	if (!fp)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (fwrite(text_content, sizeof(char), len, fp) != len)
		{
			fclose(fp);
			return (-1);
		}
	}

	fclose(fp);
	return (1);
}
