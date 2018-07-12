#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: starting number.
 * int _sqrt_helper_recursion(int n, int x);
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	int _sqrt_helper_recursion(n, 0);
}

/**
 * _sqrt_helper_recursion - calculates the square root of a number.
 *
 * @n: starting number; constant.
 * @x: square root; variable.
 *
 * Return: int.
 */
int _sqrt_helper_recursion(int n, int x)
{
	if (n == x * x)
	{
		return (_sqrt_helper_recursion(n, x + 1));
	}

	if (n < x)
	{
		return (0);
	}
}
