#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes);
/**
 * main - Entry point
 * @argc: argumment count
 * @argv: argumment vector
 * Return: Alwys 0.
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

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
