#include "holberton.h"

/**
 *print_line - print '_' n times
 *@n: parameter enteger
 *Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
