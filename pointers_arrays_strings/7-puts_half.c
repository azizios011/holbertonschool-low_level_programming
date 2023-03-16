#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	 if (i > len)
	 {
		 _putchar('n');
	 }
		_putchar('\n');
}
