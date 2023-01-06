#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	char new_s;

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	*s = new_s;
}
