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
	int sign = 1, num = 0, digit;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
				return (0);
			num = num * 10 + digit;
		}
		else if (num > 0)
			break;
		s++;
	}
	return (num * sign);
}
