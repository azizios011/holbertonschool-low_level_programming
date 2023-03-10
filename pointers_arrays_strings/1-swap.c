#include "main.h"
#include <stdio.h>
/**
 * swap_int - check the code
 *
 * @a : check code.
 *
 * @b : check code.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	  int t;

	 t  = *b;
	 *b = *a;
	*a = t;
}
