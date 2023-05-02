#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to get the bit from
 * @index: The index of the bit to get
 *
 * Return: The value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is too large */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Shift 1 to the left by index bits and perform a bitwise AND with n */
	mask = 1UL << index;
	return ((n & mask) != 0);
}
