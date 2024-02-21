#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
		return (0); /* in case of error */
	num = num * 2 + (b[i] - '0');
	}

	return (num);
}
