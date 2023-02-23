#include "main.h"

/**
 * _isupper - function that checks for upper case characters
 * @c: Character to check
 * Return: 1 (Success), 0 (Failure)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
