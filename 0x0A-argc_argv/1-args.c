#include <stdio.h>
#include <stdlib.h>

/**
 * main - Number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

