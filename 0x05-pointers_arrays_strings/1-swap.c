/**
 * swap_int - swaps two interger values
 * @a: first int value
 * @b: second int value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
