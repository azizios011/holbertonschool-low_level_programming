#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check the code
 *
 * @c : check the code.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
		return (0);
}
