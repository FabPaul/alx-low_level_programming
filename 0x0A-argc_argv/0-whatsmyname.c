#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints it's name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
