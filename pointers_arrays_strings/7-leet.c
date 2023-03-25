#include "main.h"
#include <stdio.h>
/**
 * leet - check the code for
 * @str : string.
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i, j;
	char leets_chars[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = leets_chars[j];
			}
		}
	}
	return (str);
}
