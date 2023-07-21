#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 *
 * Return: void due to void function
 */
void more_numbers(void)
{
	int r, n; /* r=repition and n=numbers */

	for (r = 0; r <= 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar('1');
			_putchar (n % 10 + '0');
		}
	}
	_putchar('\n');
}
