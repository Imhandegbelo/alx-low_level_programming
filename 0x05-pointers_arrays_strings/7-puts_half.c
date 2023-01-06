#include "main.h"
#include <string.h>

/**
 * puts_half - string is even? print half of it : print (length-1)/2 of it
 * @str: input string
 */

void puts_half(char *str)
{
	int i = 0, length = 0, n;

	while (str[i++])
		length++;
	if ((length % 2) == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;

	for (i = n; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
