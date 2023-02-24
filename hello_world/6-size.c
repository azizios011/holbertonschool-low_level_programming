#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	char  a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char:%2d byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int:%2d byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int:%2d byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int:%2d byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float:%2d byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
