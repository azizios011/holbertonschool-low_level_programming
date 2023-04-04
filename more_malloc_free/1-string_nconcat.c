#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - check the code
 * @s1 : half of string
 * @s2 : half of string
 * @n : unsigned var
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, all;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		n = len2;
	}
	all = (len1 + n + 1);
	ptr = malloc(all * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (x < len1)
	{
		ptr[x] = s1[x];
		x++;
	}
	while (y < n)
	{
		ptr[x + y] = s2[y];
		y++;
	}
	ptr[x + y] = '\0';
	return (ptr);
}
