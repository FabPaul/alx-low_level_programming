#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Program that defines a dog's elements
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Dog's elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
