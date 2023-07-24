#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int phrase = 0;
	int p = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		phrase++;
	}
	p = phrase - 1;
	for (o = 0; o <= p; o++)
	{
		if (o % 2 == 0)
		{
		_putchar(str[o]);
		}
	}
	_putchar('\n');
}
