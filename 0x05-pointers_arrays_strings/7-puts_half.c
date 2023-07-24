#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: input
 * return: half of input
 */
void puts_half(char *str)
{
	int p, h, phrase;

	phrase = 0;

	for (p = 0; str[p] != '\0'; p++)
		phrase++;

	h = (phrase / 2);

	if ((phrase % 2) == 1)
		h = ((phrase + 1) / 2);

	for (p = h; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');
}
