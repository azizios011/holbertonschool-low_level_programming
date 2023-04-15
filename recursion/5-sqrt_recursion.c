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
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i;

		for (i = 1; i * i <= n; i++)
		{}
		i--;
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
}
