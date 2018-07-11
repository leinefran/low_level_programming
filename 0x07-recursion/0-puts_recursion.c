#include "holberton.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 *
 * @s: points to the value of first address.
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
