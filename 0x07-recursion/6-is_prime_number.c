#include "holberton.h"

/**
 * is_prime_number - verifies if an interger is a prime number.
 *
 * @n: the number to be verified.
 * @div: the divisor.
 * Return: 1 if the input interger is a prime number; 0 otherwise.
 */
int is_prime_helper(int n, int div);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_helper(n, 2));

}

/**
 * is_prime_helper - helps previous function.
 *
 * @n: the number to be verified.
 * @div: the divisor.
 * Return: 1 if the input interger is a prime number; 0 otherwise.
 */
int is_prime_helper(int n, int div)
{
	if (n == div)
		return (1);

	if (n % div == 0)
		return (0);
	else
		return (is_prime_helper(n, div + 1));
}
