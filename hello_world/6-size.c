#include <stdio.h>
/**
 * main - Enter point
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %2d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %2d byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %2d byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %2d byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %2d byte(s)\n", (unsigned long)sizeof(af));
	return (0);
}
