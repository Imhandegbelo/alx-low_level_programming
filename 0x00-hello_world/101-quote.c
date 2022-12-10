#include <unistd.h>

/**
 * main - Entry point
 * Description: print to stdout using write funtion
 * Return: 1 (error)
*/

int main(void)
{
	char tx[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, tx, 59);
	return (1);
}
