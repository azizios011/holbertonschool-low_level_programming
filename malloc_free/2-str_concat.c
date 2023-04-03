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
	int i = 0, j = 0, len1 = 0, len2 = 0, len = 0, k;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	k = len1 + len2;
	result = malloc(sizeof(char) * (k + 1));
	if (result == NULL)
	{
		return (result);
	}
	i = 0;
	j = 0;
	while (i < len1)
	{
		result[len] = s1[i];
		len++;
		i++;
	}
	while (j < len2)
	{
		result[len] = s2[j];
		len++;
		j++;
	}
	return (result);
}
