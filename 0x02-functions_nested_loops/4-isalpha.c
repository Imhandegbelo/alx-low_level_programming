#include "main.h"

/**
 * _isalpha - performs the check for alphabetic characters
 * @c: input parameter of the function
 * Return: 1 if successful
 *	0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
