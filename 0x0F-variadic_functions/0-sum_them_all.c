#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: represent the number of arguments.
 *
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	if ( n == 0)
		return (0);

	va_start(ap, n); /*initializes ap for n number of arguments*/
	for (i = 0 ; i < n ; i++) /*access all the arguments assigned to ap*/
		sum += va_arg(ap, int);

	va_end(ap); /*clean memory reserved for valist*/

	return (sum);
}
