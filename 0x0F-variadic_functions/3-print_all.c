#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: list of types passed.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	char *tmp;

	va_start(ap, format); /*initializes ap for n number of arguments*/

	i = 0;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			tmp = va_arg(ap, char *);
			if (tmp != NULL)
			{
				printf("%s", tmp);
				break;
			}
			tmp = "(nil)";
			printf("(nil)");
			break;
		default: /*perform a task when none of the cases is true*/
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap); /*clean memory reserved for valist*/
	printf("\n");
}
