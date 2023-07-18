#include "main.h"
/**
 * print_last_digit - return the last digit of a number
 * @n: extract the last digit from entry
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l; /* l = last digit*/

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
