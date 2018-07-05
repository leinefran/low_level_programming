#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line;
 * print the second half of the string;
 * if the number of characters is odd: print the (length - 1) / 2.
 * @str: points to the address of the 1st character of the string to be printed
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int length, i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (length = i - 1 ; length != '\0' ; length++)
	{
		if (length % 2 == 0)
			_putchar(str[length] / 2);
	else
		_putchar((length - 1) / 2);
	}

	_putchar('\n');
}
