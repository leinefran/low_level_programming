#include "holberton.h"

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

		return (dest);
	}
}
