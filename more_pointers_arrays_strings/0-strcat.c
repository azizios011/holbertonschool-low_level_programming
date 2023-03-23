#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcat - check the code.
 *
 * @src : src.
 * @dest: dest.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
