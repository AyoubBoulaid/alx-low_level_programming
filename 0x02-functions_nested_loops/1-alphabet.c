#include "main.h"
/**
* print_alphabet - print all alphabet in lowercase
* return 0
*/
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
