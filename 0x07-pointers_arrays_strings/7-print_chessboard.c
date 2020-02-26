#include "holberton.h"

/**
 *print_chessboard - prints the chessboard.
 *@a: pointer parameter matrix
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char b;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			b = a[i][j];
			_putchar(b);
		}
		_putchar('\n');
	}
}
