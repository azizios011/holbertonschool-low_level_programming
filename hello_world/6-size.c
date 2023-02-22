#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	printf("Size of a char: %2d byte(s) \n", sizeof(char));
	printf("Size of an int: %2d byte(s) \n", sizeof(short int));
	printf("size of a long int: %2d byte(s) \n", sizeof(long int));
	printf("size of a long long int: %2d byte(s) \n", sizeof(long long int));
	printf("size of a float: %2d byte(s) \n", sizeof(float));
	return (0);
}
