#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;
	/* your code goes there */

	if (digit > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, digit);
	}

	else if (digit == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, digit);
	}

	else
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
