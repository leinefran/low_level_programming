#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line;
 * the function should print the second half of the string;
 * if the number of char is odd: print the (length_of_the_string - 1) / 2.
 * @str: points to the address of the 1st character of the string to be printed
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int i, length;

	i = 0;

	while (str[i] != '\0')
		i++;

	length = (i + 1) / 2;

	i = length;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
