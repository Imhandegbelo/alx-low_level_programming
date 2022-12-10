#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet using putchar
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	printf("\n");

	return (0);
}
