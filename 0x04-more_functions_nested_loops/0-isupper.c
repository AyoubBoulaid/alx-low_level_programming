#include "main.h"

/**
 * _isupper - checks for upper case letters
 * @c: char to check
 *
 * Return: 0 if lower or 1 if upper case letter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
