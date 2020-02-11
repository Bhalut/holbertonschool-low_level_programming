#include "holberton.h"

/**
 *
 *
 *
 */
void jack_bauer(void)
{
	int i;
	int y;
	int x;
	int z;

	for (i = 0; i <= 2; i++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (x = 0; x <= 5; x++)
			{
				for (z = 0; z <= 9; z++)
				{
					_putchar(i + '0');
					_putchar(y + '0');

					_putchar(':');

					_putchar(x + '0');
					_putchar(z + '0');

					_putchar('\n');

					if (!(i == 2 && y == 3
					      && x == 5 && z == 9))
					{
						continue;
					}
					else
					{
						return;
					}
				}
			}
		}
	}
}
