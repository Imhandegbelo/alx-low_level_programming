#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to created array
 * if min > max, returns NULL
 * if malloc fails, returns NULL
 */

int *array_range(int min, int max)
{
	int *arrr, i;

	if (min > max)
		return (NULL);
	arrr = malloc(sizeof(*arrr) * (max - min + 1));

	if (arrr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arrr[i] = min;
		min++;
	}
	return (arrr);
}
