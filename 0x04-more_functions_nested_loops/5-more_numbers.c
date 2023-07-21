#include "main.h"

/**
 * more_numbers - print 0to14 10 times
 */

void more_numbers(void)
{
	int r, n; /* r=repitions and n=numbers */

	for (r = 1; r <= 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar (n % 10 + '0');
		}
		_putchar('\n');
	}
}
