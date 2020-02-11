#include "holberton.h"

/**
 *times_table - display times table
 *Return void
 */
void times_table(void)
{
	int x, y, tmp, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;

			if (result > 9)
			{
				tmp = result / 10;
				_putchar(tmp + '0');
				tmp = result % 10;
				_putchar(tmp + '0');
			}
			else
			{
				_putchar(result + '0');
			}

			tmp = x * (y + 1);

			if (y != 9 && tmp > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (y != 9 && result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
