#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r, w, c;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	r = read(file, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		return (0);
	}

	if (r != w)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	c = close(file);
	if (c == -1)
		return (0);

	return (w);
}
