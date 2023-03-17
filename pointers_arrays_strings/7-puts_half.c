#include "main.h"
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
	int i;

	for (i = len / 2; str[i] != '\0'; i++)
	{

		_putchar(str[i]);
	}
		_putchar('\n');
}
