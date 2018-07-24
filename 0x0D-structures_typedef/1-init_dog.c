#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * @d: pointer to struct dog my_dog
 *
 * Return: pointer to allocated memory.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
