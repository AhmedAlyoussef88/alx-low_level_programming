#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *bufferCreate(char *file);
void File_Close(int fd);
/**
 * bufferCreate - Allocates 1024 bytes for a buffer.
 * @file: input parameter
 * Return: pointer of new allocated buffer.
 */
char *bufferCreate(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * File_Close - close the file.
 * @fd: input parameter.
 */
void File_Close(int fd)
{
	int x = close(fd);

	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: input parameter
 * @argv: input parameter
 * Return: success (0)
 */
int main(int argc, char *argv[])
{
	int f, t, _read, _write;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_f file_t\n");
		exit(97);
	}
	b = bufferCreate(argv[2]);
	f = open(argv[1], O_RDONLY);
	_read = read(f, b, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f < 0 || _read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read f file %s\n", argv[1]);
			free(b);
			exit(98);
		}
		_write = write(t, b, _read);
		if (t < 0 || _write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write t %s\n", argv[2]);
			free(b);
			exit(99);
		}
		_read = read(f, b, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (_read > 0);
	free(b);
	File_Close(f);
	File_Close(t);
	return (0);
}

