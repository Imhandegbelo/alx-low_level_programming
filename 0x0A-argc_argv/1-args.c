#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: hold arguments passed
 *
 * Return: 0 (Success)
 */

int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
