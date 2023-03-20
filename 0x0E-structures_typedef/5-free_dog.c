#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees dog
 * @d: struct of dog
 * Return: null
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
