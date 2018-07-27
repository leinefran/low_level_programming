#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that print strings, followed by a new line.
 * @n: represent the number of arguments.
 * @separator: the string to be printed between the strings.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *tmp;


		va_start(ap, n); /*initializes ap for n number of arguments*/
		for (i = 0 ; i < n ; i++) /*access all the arguments in ap*/
		{
			tmp = va_arg(ap, char *);
			if (tmp != NULL)
				printf("%s", tmp);
			else
				printf("(nil)");

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);

		}
		va_end(ap); /*clean memory reserved for valist*/
		printf("\n");
}
