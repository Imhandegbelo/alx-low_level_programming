#include <stdio.h>

/**
 * main - Entry point
 * Description: prints _putchar to stdout
 * Return: 0 (Success)
 */

int main(void)
{
	char st[] = "_putchar";
	int chr = 0;

	while (chr < 8 )
	{
		_putchar(st[chr]);
		chr++;
	}
	_putchar('\n');

	return (0);
}
