#include "holberton.h"

/**
 *more_numbers - print numbers from 0 to 14
 *Return: void
 */
void more_numbers(void)
{
	int i;
	int tmp;
	int u;

	for (u = 0; u <= 9; u++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				tmp = i / 10;
				_putchar(tmp + '0');
				tmp = i % 10;
				_putchar(tmp + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
