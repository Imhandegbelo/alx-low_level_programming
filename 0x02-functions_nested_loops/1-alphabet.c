#include "main.h"

/**
 * print_alphabet - prints the lower case alphabet to stdout
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}

