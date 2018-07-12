#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: starting number.
 *
 * Return: int.
 */
int _sqrt_helper_recursion(int n, int x);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return	(_sqrt_helper_recursion(n, 0));
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
		return (x);
	}
	else if ((x * x) >= n)
	{
		return (-1);
	}
	else
	{
		return(_sqrt_helper_recursion(n, x + 1));
	}
}
