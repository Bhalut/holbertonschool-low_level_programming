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
	int file, w;
	unsigned int n;
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (!file)
		return (0);

	n = read(file, buffer, letters);
	if (!n)
		return (0);

	w = write(STDOUT_FILENO, buffer, n);
	if (!w)
		return (0);

	close(file);
	free(buffer);

	return (n);
}
