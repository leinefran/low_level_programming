#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dog_t struct.
 *
 * @d: pointer to dog_t.
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
