#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - check the code
 * @nmemb : unsigned var.
 * @size : unsigned var.
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i, nb;
	char *ptr;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
		nb = nmemb * size;
		ptr = malloc(nb);
		if (ptr == NULL)
		{
			return (NULL);
		}
		i = 0;
		while (i < (size * nmemb))
		{
			ptr[i] = '\0';
			i++;
		}
		return (ptr);
}
