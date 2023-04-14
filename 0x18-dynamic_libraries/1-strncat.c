#include "main.h"

/**
 * _strncat - funtion that concatenates two strings
 * Description: not much to describe here
 * @dest: resulting string
 * @src: string to concatenate
 * @n: number of bytes
 * Return: pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
