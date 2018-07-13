#include "holberton.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 *
 * @s: a pointer to a pointer. Holds value of S0.
 * @to: a pointer to S1.
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
