#include "main.h"

/**
 * print_array - prints n elements of an array of ints
 * @a: array input
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i = 0, len = 0, el;

	while (a[i++])
		len++;
	if (len == n)
	{
		for (el = 0; el < n - 1; el++)
			printf("%d, ", a[el]);
		printf("%d\n", a[n - 1]);
	}
	else
		printf("\n");
}
