#include <stdio.h>

/**
 *main - display all possible combinations of two two-digit numbers
 *Return: 0
 */

int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int o = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 8; y++)
		{
			o = y + 1;
			z = x;
			for (; z <= 9; z++)
			{
				for (; o <= 9; o++)
				{
					putchar(x + '0');
					putchar(y + '0');

					putchar(' ');

					putchar(z + '0');
					putchar(o + '0');
					if (!(x == 9 && y == 8
					      && z == 9 && o == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = 0;
			}
		}
	}

	putchar('\n');

	return (0);
}
