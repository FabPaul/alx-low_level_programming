#include "main.h"

/**
 * _islower - check for lowercase characters
 * Return: 1 (Success)
 * Return: 0 (Failure)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
