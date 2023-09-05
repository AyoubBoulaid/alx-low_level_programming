#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: 1st unsigned long integer
 * @m: 2nd unsigned long integer
 * Return: # of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int calc = 0; /* calculating from 0 and up*/
	unsigned long int cont = n ^ m; /* xor calculates the contradictive bits */

	while (cont != 0)
	{
		calc = calc + (cont & 1); /* starts with checking right bit */
		cont >>= 1; /* move the bits to the right*/
	}

	return (calc);
}
