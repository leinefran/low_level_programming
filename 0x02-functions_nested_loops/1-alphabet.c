#include "holberton.h"

/**
 * print_alphabet - entry point
 * Description: print alphabet in lower case
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
