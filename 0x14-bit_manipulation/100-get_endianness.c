#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *e = (char *)&n;

	return (*e);/*If 1st byte is 1 it's little-endian if not it's big-endian*/
}
