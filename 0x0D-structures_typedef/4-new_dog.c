#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest:  destination of copy
 * @src: source of copy
 *
 * Return: char *dest
 */
char *_strcpy(char *dest, char *src)
{
	{
		int counter;

		for (counter = 0; src[counter] != '\0'; counter++)
			dest[counter] = src[counter];
		dest[counter] = '\0';

		return (dest);
	}
}

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *c_name, *c_owner;
	int i, j, n_len, o_len;

	for (i = 0; i != '\0' ; i++)
		n_len++;
	for (j = 0; j != '\0' ; j++)
		o_len++;

	c_name = malloc(sizeof(char) * (n_len + 1));
	c_owner = malloc(sizeof(char) * (o_len + 1));
	ndog = malloc(sizeof(dog_t));

	if ((c_name == NULL) || (c_owner == NULL) || (ndog == NULL))
	{
		free(c_name);
		free(c_owner);
		return (NULL);
	}
	else
	{
		ndog->name = _strcpy(c_name, name);
		ndog->age = age;
		ndog->owner = _strcpy(c_owner, owner);
	}
	return (ndog);
}
