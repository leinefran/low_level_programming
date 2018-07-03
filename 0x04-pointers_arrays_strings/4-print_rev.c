#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: points to the address of the 1st character of the string to be printed
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int lenght, count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
		for (lenght = count - 1 ; lenght >= 0 ; lenght--)
		_putchar(s[lenght]);

	_putchar('\n');
}
