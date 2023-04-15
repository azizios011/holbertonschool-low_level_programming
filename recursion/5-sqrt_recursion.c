#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - check the code
 * @n: varaible
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_helper(n, 0, n));
}

/**
 * sqrt_helper - check the code
 * @n: the number whose square root is to be found
 * @start:  the lower bound of the range of possible square roots
 * @end: the upper bound of the range of possible square roots
 * Return: value.
*/
int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}

	mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1));
	}
}
