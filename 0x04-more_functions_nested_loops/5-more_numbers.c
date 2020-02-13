#include "holberton.h"

/**
 *more_numbers - print numbers from 0 to 14
 *Return: void
 */
void more_numbers(void)
{
	int i, u, o;
	int tmp;

	for (u = 0; u <= 9; u++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				for (o = 0; o < 2; o++)
				{
					tmp = (o == 0) ? i / 10 : i % 10;
					_putchar(tmp + '0');
				}
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
