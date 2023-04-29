#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Returns a pointer to the function that corresponds
 *                to the operator given as a parameter.
 * @s: Operator passed as argument to the program
 *
 * Return: A pointer to the function that corresponds to the operator
 *         given as a parameter, or NULL if s does not match any of
 *         the expected operators (+, -, *, /, %)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
