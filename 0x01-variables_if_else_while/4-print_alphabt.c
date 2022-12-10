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
		printf("%c", c);
		c++;

		if (c == 'e' || c == 'q')
			continue;
	}
	printf("\n");

	return (0);
}
