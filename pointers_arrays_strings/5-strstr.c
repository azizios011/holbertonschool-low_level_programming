#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
 * _strstr - checke the code
 * @haystack: pointer
 * @needle: pointer
 * Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
			;
		if (needle[k] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
