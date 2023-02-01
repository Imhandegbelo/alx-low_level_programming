#include "main.h"

/**
 * print_array - prints n elements of an array of ints
 * @a: array input
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int el;

		for (el = 0; el < n; el++)
		{
			printf("%d", a[el]);
			if (el == n - 1)
				continue;
			printf(", ");
		}
		printf("\n");
}
