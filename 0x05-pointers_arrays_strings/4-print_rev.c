#include "main.h"

/**
 * print_rev - function prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int phrase = 0;
	int o;

	while (*s != '\0')
	{
		phrase++;
		s++;
	}
	s--;
	for (o = phrase; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
