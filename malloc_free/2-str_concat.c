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
	int len1 = 0;
	int len2 = 0;
	int i;
	char *r;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s1[len2] != '\0')
	{
		len2++;
	}

	r = malloc((len1 + len2 + 1) * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		r[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		r[len2 + 1] = s2[i];
	}
	r[len1 + len2] = '\0';
	return (r);
}
