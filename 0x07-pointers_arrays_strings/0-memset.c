/**
 * _memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare unsigned int because the value is
	 * expected to be non-zero always
	 */
	unsigned int i;

	for ( i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
