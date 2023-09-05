#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * to a given index
 * @index: the bit you wanna set
 * @n: searched number
 * Return: 1 if it worked or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitnum = sizeof(n) * 8; /* converts size to bits */

	if (index >= bitnum)
	{
		return (-1);
	}

	*n = (*n | (1UL << index));

	return (1);
}
