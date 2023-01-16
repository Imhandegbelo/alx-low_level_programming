#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments passed
 * @argv: arguments passed
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
