/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index, starting from 0 of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* check if index is within the range of the number of bits */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* create a mask with all 1's except for a 0 at the index we want to clear */
	mask = ~(1UL << index);

	/* clear the bit at the given index */
	*n &= mask;

	return (1);
}
