#include <stdio.h>

/**
 * main - Entry point
 * Description: prints combinations of two digits without repitition
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int k;

		for (k = i + 1; k < 10; k++)
		{
			putchar(i + '0');
			putchar(k + '0');

			if (i != 8 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
