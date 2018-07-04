#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string, followed by a new line
 * @str: points to the address of the 1st character of the string to be printed
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int number;

	number = 0;

	while (str[number] != '\0')
	{
		if (number % 2 == 0)
		_putchar(str[number]);
		number++;
	}
	_putchar('\n');
}
