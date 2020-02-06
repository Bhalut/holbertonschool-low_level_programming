#include <stdio.h>

/**
 *main - display the numbers from 00 to 99
 *Return: 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (y != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
