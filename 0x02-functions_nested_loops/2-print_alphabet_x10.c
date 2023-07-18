#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int rep; /* rep = repitions of the alphabets */

	rep = 0;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(ch);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
