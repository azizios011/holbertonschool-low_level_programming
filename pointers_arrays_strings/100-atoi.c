#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - check the code
 * @s: pointer
 * Return: return the result.
 */
int _atoi(char *s)
{
	int sign = 1;
	long num = 0, digit;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			num = num * 10 + digit * sign;
			if (num > INT_MAX)
				return (INT_MAX);
			else if (num < INT_MIN)
                return (INT_MIN);
		}
		else if (num != 0)
			break;
		s++;
	}
	return ((int)num);
}
