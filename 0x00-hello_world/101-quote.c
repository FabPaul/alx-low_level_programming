#include <unistd.h>
#include <string.h>

/**
 * main - Function that prints an output using the write() function
 * Return - The output
 */

int main(void)
{
	char* output = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDOUT_FILENO, output, strlen(output));
	return (1);
}
