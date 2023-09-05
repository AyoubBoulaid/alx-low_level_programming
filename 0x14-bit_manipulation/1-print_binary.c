#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number that will be printed in binary format
 */

void print_binary(unsigned long int n)
{
	int nz = 0; /*indication of no 1 bit encountered*/
	unsigned long int bm = 1; /* bit mask */

	if (n == 0) /* checks if n is 0*/
	{
		_putchar('0');
	}

	while (bm > 0)/* goes from left to right while checking every bit */
	{
		if ((n & bm) != 0)/* bitwise operator checking n and bm*/
		{
			_putchar('1');
			bm = 1;
		}

		else if (nz)
		{
			_putchar('0');
		}
		bm >>= 1;
	}
}
