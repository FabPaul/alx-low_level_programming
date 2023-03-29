#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Function that prints an output using the write() function
 * Return - The output
 */

int main(void)
{
	char *print = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, print, strlen(print));
	return (1);
}
