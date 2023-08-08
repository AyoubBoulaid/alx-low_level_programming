#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate command line arguments into a string
 * @ac: The number of command line arguments
 * @av: An array of command line argument strings
 *
 * Return: A pointer to the concatenated string
 * or NULL if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, str_index = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}
	}
	total_length += ac;  /* newline characters */

	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[str_index] = av[i][j];
			str_index++;
		}

		str[str_index] = '\n';
		str_index++;
	}

	str[str_index] = '\0';

	return (str);
}
