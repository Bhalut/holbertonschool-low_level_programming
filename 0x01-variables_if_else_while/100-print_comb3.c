#include <stdio.h>

/**
 *main - display all possible different combinations of two digits
 *Return: 0
 */

int main(void)
{
	int x;
	int y = 0;

	for (x = 0; x <= 9; x++)
	{
		y = x + 1;
		for (; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (!(x == 8 && y == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
