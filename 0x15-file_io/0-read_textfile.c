#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of file
 * @letters: numbers of letters it should read and print
 * Description: if filename is NULL, write fails or does not
 *      write the expected number of bytes return 0
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t num_read, num_write;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	num_read = read(file, buf, letters);
	num_write = write(STDOUT_FILENO, buf, num_read);

	close(file);

	free(buf);

	return (num_write);
}
