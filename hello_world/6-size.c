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

	printf("Size of char: %c byte(s)\n", sizeof(a));
	printf("Size of a int: %i byte(s)\n", sizeof(b));
	printf("Size of a long int: %li byte(s)\n", sizeof(c));
	printf("Size of long long int: %lli byte(s)\n", sizeof(d));
	printf("size of float: %f byte(s)\n", sizeof(e));
	return (0);
}
