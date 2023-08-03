#include "main.h"

/**
 * flip_bits - returns number of bits that need to flip to change numbers
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int first_int;
	unsigned long int new_int = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		first_int = new_int >> i;
		if (first_int & 1)
			count++;
	}
	return (count);
}
