#include "main.h"
#include <stdio.h>

/**
 * _memset - check the code
 * @s: pointer to the memory area
 * @b: set each byte to the value
 * @n: bytes of the memory area
 * Return: returns a pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
