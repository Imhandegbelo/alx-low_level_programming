#include "main.h"
#include <string.h>

/**
 * puts-half - string is even? print half of it : print (length-1)/2 of it
 * @str: input string
 */

void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int half;

	if (length_of_the_string % 2 == 0)
		half = length_of_the_string / 2;
	else
		half = (length_of_the_string - 1) / 2;

	while (*(str + half) != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
