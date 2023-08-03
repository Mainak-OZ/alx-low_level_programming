#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Returns: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 16)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
