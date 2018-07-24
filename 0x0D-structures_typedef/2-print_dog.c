#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog.
 *
 * @d: pointer to struct dog my_dog
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
	}
}
