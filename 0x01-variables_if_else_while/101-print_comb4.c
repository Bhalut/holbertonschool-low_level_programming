#include <stdio.h>

/**
 *main - display all possible different combinations of three digits
 *Return: 0
 */

int main(void)
{
	int x;
	int y = 0;
	int z = 0;

	for (x = 0; x <= 9; x++)
	{
		y = x + 1;
		for (; y <= 9; y++)
		{
			z = y + 1;
			for (; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (!(x == 7 && y == 8 && z == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
