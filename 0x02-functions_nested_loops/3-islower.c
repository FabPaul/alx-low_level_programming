#include "main.h"

/**
 * _islower - check for lowercase characters
 * @c: Printable character
 * Return: 1 (Success) 0 (Failure)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
