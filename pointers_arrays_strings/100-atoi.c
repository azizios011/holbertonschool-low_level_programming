#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
/**
 * _atoi - check the code
 * @s : pointer
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int ss = 1, r = 0, digit;

	while (isspace(*s))
	{
		s++;
	}
	if (*s == '-')
	{
		ss = -1;
		s++;
	}
	else if (*s == '-')
	{
		s++;
	}
	while (isdigit(*s))
	{
		digit = *s - '0';
		if (r > (INT_MAX - digit) / 10)
		{
			return (ss == -1 ? INT_MIN : INT_MAX);
		}
		r = r * 10 + digit;
		s++;
	}
	return (ss * r);
}
