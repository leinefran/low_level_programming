#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: represent the number of arguments.
 * @separator: the string to be printed between numbers.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if ( separator != NULL)
	{
		va_start(ap, n); /*initializes ap for n number of arguments*/
		for (i = 0 ; i < n ; i++) /*access all the arguments in ap*/
		{
			printf("%d", va_arg(ap,int));
			if (i != n - 1)
			{
				printf("%s", separator);
			}

		va_end(ap); /*clean memory reserved for valist*/
		}
	}
	printf("%c",'\n');
}
