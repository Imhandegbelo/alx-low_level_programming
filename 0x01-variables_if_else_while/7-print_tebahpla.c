#include <stdio.h>

/**
 * main - enrty point
 * Description: print alphabet in reverse order
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
