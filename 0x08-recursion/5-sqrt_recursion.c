#include "main.h"

/**
 * is_sqrt - confir,ms the natural square root of a number
 * @num: input
 * @squared: input two
 * Return: number
 */

int is_sqrt(int num, int squared)
{
	if ((squared * squared) == num)
	{
		return (squared);
	}
	else if (squared == num / 2)
	{
		return (-1);
	}
	return (is_sqrt(num, squared + 1));
}

/**
 * _sqrt_recursion - returns sqrt of a number
 * @n: number input
 * Return: sqrt of "n"
 */

int _sqrt_recursion(int n)
{
	int squared = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (is_sqrt(n, squared));
}
