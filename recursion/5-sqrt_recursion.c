#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - check the code
 * @n: varaible
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - check the code
 * @n: the number whose square root is to be found
 * @i: iterate number
 * Return: value.
*/
int sqrt_helper(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}
