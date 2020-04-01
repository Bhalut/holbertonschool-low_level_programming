#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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
 * main - copy program
 * @argc: count paramenters
 * @argv: array to parameters
 * Return: 0 success or another value fail
 */
int main(int argc, char *argv[])
{
	int file, r, w, c;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);

	file = open(argv[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	r = read(file, buffer, 1024);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	c = close(file);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file),
			exit(100);

	file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file == -1)
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n",
			argv[2]), exit(99);
	w = write(file, buffer, _strlen_recursion(buffer));
	if (w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n",
			argv[2]), exit(99);
	c = close(file);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file),
			exit(100);

	return (0);
}
