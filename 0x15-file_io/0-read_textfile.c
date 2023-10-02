#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: input parameter string
 * @letters: input parameter object
 * Return: filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, _read, _write;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);
	_read = read(x, b, letters);
	_write = write(STDOUT_FILENO, b, _read);
	if (x == -1 || _read < 0 || _write < 0 || _write != _read)
	{
		free(b);
		return (0);
	}
	free(b);
	close(x);
	return (_write);
}
