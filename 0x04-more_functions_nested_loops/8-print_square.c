#include "holberton.h"

/**
 *print_square - print square with a size
 *@size: parameter enteger
 *Return: void
 */
void print_square(int size)
{
	int i, u;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (u = 0; u < size; u++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
