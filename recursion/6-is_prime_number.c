#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check the code
 * @n: is a prime number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - check the code
 * @n: is a prime number
 * @divisor: check is equal to n
 * Return: Always 0.
 */
int is_prime_helper(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor + 1));
}
