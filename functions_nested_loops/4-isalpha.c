#include "main.h"
/**
 * _isalpha - check the code.
 *
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
	}
		return (0);
}
