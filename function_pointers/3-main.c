#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings representing the arguments passed to the program
 *
 * Return: 0 (Success), or other values in case of errors
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4) /* Check number of arguments */
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]); /* Convert first argument to int */
	num2 = atoi(argv[3]); /* Convert third argument to int */

	op_func = get_op_func(argv[2]); /* Get function for the operator */

	if (op_func == NULL) /* Check if operator is valid */
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{ /* Check for division by 0 */
		printf("Error\n");
		return (100);
	}

	result = op_func(num1, num2); /* Perform operation */

	printf("%d\n", result); /* Print result */

	return (0);
}
