#include "holberton.h"

/**
 * main - Entry point
 * prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
		char ch;

		void print_alphabet(char);

			for (ch = 'a'; ch <= 'z' ; ch++)
			{
				_putchar(ch);
			}
		_putchar('\n');
		return (0);
}
