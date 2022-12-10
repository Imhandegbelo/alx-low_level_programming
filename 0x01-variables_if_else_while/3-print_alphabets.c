#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lower and upper case
 * Return: 0
 */

int main(void)
{
	char small = 'a';
	char big = 'A';

	while (small < 'z')
	{
		printf(small);
		small++;
	}
	while (big < 'Z')
	{
		printf(big);
		big++;
	}

	printf("\n");

	return (0);
}
