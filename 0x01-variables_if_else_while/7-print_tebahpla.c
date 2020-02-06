#include <stdio.h>

/**
 *main - display all the numbers of base 16 in lowercase
 *Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
