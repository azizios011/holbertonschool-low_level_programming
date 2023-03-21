#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 *
 * @str : string.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i = len / 2;
	int j;

	if (len % 2 != 0)
	{
		i = (len + 1) / 2;
	}
	for (j =  i; j < len; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
