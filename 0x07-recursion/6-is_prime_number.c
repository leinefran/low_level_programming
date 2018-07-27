#include "holberton.h"

/**
 * is_prime_number - verifies if an interger is a prime number.
 *
 * @n: the number to be verified.
 *
 * Return: 1 if the input interger is a prime number; 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	for (i = 5 ; i * i <= n ; i = i + 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (1);
}