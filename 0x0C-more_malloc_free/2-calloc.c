#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: number of bytes to allocate
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		memory[i] = 0;
	return (memory);
}
