#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic letter
 * @c: the character to check
 *
 * Return: 1 if c (Success), 0 (Failure)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
	    return (1);
    }
    else
    {
	    return (0);
    }
}
