#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	int c = 2;

	while (n > 1)
	{
		if (num % c == 0)
		{
			printf("%d", c);
			n /= c;
		}
		else
			c++;
	}
	printf("%l\n", num);
	return (0);
}
