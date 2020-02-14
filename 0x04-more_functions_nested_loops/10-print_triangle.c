#include "holberton.h"

/**
 *print_triangle - print triangle for a size
 *@size: parameter integer
 *Return: void
 */
void print_triangle(int size)
{
	int i, j, tmp;

	tmp = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= tmp)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			tmp--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
