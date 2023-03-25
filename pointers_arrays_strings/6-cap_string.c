#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - check the code
 * @str : string.
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ')
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
