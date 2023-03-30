#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - check the code
 * @str : pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);
	return (new_str);
}
