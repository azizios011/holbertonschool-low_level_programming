#include "main.h"
#include <stdio.h>
/**
 * _abs - check the code
 *
 * @u : integer
 *
 * Return: Always 0.
 */
int _abs(int u)
{
	if (u < 0)
	{
		return (-u);
	}

	else if (u > 0)
	{
		return (u);
	}

	else
	{
		return (0);
	}
}
