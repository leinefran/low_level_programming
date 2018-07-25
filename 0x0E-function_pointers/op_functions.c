#include <stdio.h>
#include "calc.h"

/**
 * op_add - add a and b.
 * @a: parameter.
 * @b: parameter.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op-sub - subtract a and b.
 * @a: parameter.
 * @b: parameter.
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples a and b.
 * @a: parameter.
 * @b: parameter.
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a and b.
 * @a: parameter.
 * @b: parameter.
 *
 * Return: the result of the division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: parameter.
 * @b: parameter.
 *
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a / b % 10);
}
