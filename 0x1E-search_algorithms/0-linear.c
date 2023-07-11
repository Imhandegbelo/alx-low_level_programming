#include "search_algos.h"

/**
  * linear_search - Searches an array of integers for a specific value
  * @array: A pointer to the first element of the array
  * @size: Number of elements in the array
  * @value: Value to search
  * Return: index at which value is found or -1 if value does not exist
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
