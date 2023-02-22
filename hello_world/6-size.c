#include <stdio.h>
/**
 * main - Entry point
 *
 * Returne: Always 0;
 */
int main(void)
{
	printf("Size of int = %2d bytes \n", sizeof(short int));
	printf("Size of a long int = %2d bytes \n", sizeof(long int));
	printf("Size of a float = %2d bytes \n", sizeof(float));
	printf("Size of a long long int = %2d bytes \n", sizeof(double));
	printf("Size of a char = %2d bytes \n", sizeof(char));
	return (0);
}
