#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - check the code
 * @s1 : pointer
 * @s2 : pointer
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *r;

	if (s1 == NULL)
	{
		s1 =  "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	r = malloc(len1 + len2 + 1);

	if (r == NULL)
	{
		return (NULL);
	}
	memcpy(r, s1, len1);
	memcpy(r + len1, s2, len2 + 1);
	return (r);
}
