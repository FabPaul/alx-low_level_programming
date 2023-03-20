#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initializes a variable of type struct dog
 * @d:address of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 * Return: Nothing really
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
