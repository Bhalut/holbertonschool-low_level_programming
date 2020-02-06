#include <stdio.h>

/**
 *main - display the alphabet in lowercase, all the letters except q and e
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
