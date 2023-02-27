#include<stdio.h>
/*
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %c byte(s)\n", (unsigned char)sizeof(a));
	printf("Size of a int: %i byte(s)\n", (unsigned int)sizeof(b));
	printf("Size of a long int: %li byte(s)\n", (unsigned long int)sizeof(c));
	printf("Size of long long int: %lli byte(s)\n", (unsigned long long int)sizeof(d));
	printf("size of float: %f byte(s)\n", (unsigned float)sizeof(e));
	return (0);
}
