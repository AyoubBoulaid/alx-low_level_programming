#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of a specified
 * size and fill it with a char
 * @size: The size of the array
 * @c: The char to fill the array with
 *
 * Description: This function creates an array
 * of the given size and fills it with the
 * specified char.
 *
 * Return: A pointer to the created array, or NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
