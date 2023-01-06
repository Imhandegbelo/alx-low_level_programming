#include "main.h"

/**
 * puts2 - prints all odd characters of a string beginings from *[0]
 * @str: string to analyse
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i%2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
