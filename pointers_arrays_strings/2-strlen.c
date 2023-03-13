#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the code
 *
 * @s : check the code.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
		return (len);
}
