#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - check the code
 * @x : var.
 * @y : var.
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
