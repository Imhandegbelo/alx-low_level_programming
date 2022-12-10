#include <stdio.h>

/**
 * main - Entry point
 * Description: prints combinations of two digits without repitition
 * Return: 0
 */

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int k = i + 1; k < 10; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
