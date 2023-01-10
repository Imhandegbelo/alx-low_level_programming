/**
 * _memcpy - copies memory area
 * @dest: copy destination
 * @src: copy src
 * @n: bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
