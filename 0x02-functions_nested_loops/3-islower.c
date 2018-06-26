#include "holberton.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: the letter to be checked
 *
 * Return: 1 if letter is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
