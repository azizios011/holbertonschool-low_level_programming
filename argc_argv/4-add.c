#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc : argument count
 * @argv : argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int ios = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		ios += atoi(argv[i]);
	}
	printf("%d\n", ios);
	return (0);
}
