#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *_strlen_recursion - returns the length of a string
 *@s: pointer parameter character
 *Return: count size
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		return (count + _strlen_recursion(s + 1));
	}
	else
	{
		return (count);
	}
}

/**
 * create_file - creates a file.
 * @filename: file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, c;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (!text_content)
		return (1);

	w = write(file, text_content, _strlen_recursion(text_content));
	if (w == -1)
		return (-1);

	c = close(file);
	if (c == -1)
		return (-1);

	return (1);
}
