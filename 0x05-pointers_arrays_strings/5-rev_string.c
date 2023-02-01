#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char new_s;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		new_s = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = new_s;
	}
}
