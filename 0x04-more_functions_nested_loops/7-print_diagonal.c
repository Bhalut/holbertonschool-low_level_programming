#include "holberton.h"

/**
 *print_diagonal - print '\' diagonal
 *@n: parameter integer
 *Return: void
 */
void print_diagonal(int n)
{
	int i;
	int u;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (u = 0; u < i; u++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
