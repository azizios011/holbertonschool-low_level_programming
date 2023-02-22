#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	printf("Size of a char = %2d bytes \n", sizeof(char));
	printf("Size of an int = %2d bytes \n", sizeof(short int));
	printf("size of a long int = %2d bytes \n", sizeof(long int));
	printf("size of a long long int = %2d bytes \n", sizeof(long long int));
	printf("size of a float = %2d bytes \n", sizeof(float));
	return (0);
}
