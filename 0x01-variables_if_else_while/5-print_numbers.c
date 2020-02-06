#include <stdio.h>

/**
 *main - display all single digit numbers of base 10 starting from 0
 *Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	putchar('\n');
	return (0);
}
