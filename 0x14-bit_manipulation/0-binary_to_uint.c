#include <stddef.h>
#include "main.h"

/**
  * binary_to_uint - function that converts a binary number to
  * an unsigned int.
  * @b: pointer to a string of 0 and 1 chars.
  * Return: Output
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1') /*if b was not either 1 no 0 return 0*/
		{
			return (0);
		}

		output = output * '2' + (*b - '0'); /* convert binary to unsigned int*/
		b++; /* used to increment b to the next character in the binary string */
	}

	return (output);
}
