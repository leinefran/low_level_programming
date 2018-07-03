#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: pointer to the first character of the string to be printed
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
