#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: input parameter string
 * @text_content: input parameter string
 * Return: filename is NULL return -1,
 * text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int _open, _write, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}
	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(_open, text_content, length);
	if (_open < 0 || _write < 0)
	{
		return (-1);
	}
	close(_open);
	return (1);
}

