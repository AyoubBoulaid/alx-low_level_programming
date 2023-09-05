#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer to retrieve
 * @index: index of bit
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val; /* value of a bit */
	unsigned int bitnum = sizeof(n) * 8;

	if (index >= bitnum)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
