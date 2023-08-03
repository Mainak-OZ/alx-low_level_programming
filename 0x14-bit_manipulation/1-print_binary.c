#include "main.h"

/**
 * print_binary - prints the binary of a number
 *
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int num1;

	for (i = 31; i >= 0; i--)
	{
		num1 = n >> i;

		if (num1 & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
