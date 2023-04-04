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
	char *ptr = NULL;

	if (nmemb && size)
	{
		nb = nmemb * size;
		ptr = malloc(nb);
		if (ptr)
		{
			i = 0;
			while (nb--)
			{
				ptr[i] = 'z';
			}
		}
	}
	return (ptr);
}
