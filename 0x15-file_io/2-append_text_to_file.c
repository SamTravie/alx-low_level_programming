#include "main.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ft;
	long _write;

	if (filename == NULL)
	{
		return (-1);
	}

	ft = open(filename, O_RDWR | O_APPEND);

	if (ft == -1)
	{
		close(ft);
		return (-1);
	}
	if (text_content != NULL)
	{
	_write = write(ft, text_content, _strlen(text_content));
	}
	close(ft);

	if (_write == -1)
	{
		return (-1);
	}
	return (1);
}
