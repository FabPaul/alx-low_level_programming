#include <unistd.h>

/**
 * _putchar - Prototype of a function that writes the number s to stdout
 * @s: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}
