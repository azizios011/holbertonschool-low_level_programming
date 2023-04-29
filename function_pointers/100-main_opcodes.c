#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);
/**
 * main - Entry point
 * @argc: argumment count
 * @argv: argumment vector
 * Return: Alwys 0.
*/
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02x ", ((unsigned char *)print_opcodes)[i]);
	}
	printf("\n");
	return (0);
}
/**
 * print_opcodes - check the code
 * @num_bytes: number of bytes
 * Return: Always 0.
*/
void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}
