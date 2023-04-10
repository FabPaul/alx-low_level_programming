#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

/**
 * main - Function that copies the content of a file to another
 * @argc: Argument content
 * @argv: Argument vector
 * Return: 0 if success and a particular error code if failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, reads, wrote;
	mode_t p = S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read drom file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, p);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do
	{
		reads = read(file_from, buffer, BUFSIZE);
		if (reads == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wrote = write(file_to, buffer, reads);
		if (wrote == -1 || wrote != reads)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}

	while (reads == BUFSIZE);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
