#include "holberton.h"

/**
 *print_rev - display revert string data
 *@s: pointer char
 *Return: void
 */
void print_rev(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}

	for (i = i - 1; s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
