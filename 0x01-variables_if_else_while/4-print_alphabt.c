#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet excluding some
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	printf("\n");

	return (0);
}
