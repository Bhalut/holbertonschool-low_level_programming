#include "holberton.h"

/**
 *main - Display Holberton, character by character
 *Return: 0 success
 */

int main(void)
{
	int i;
	char name[10] = "Holberton";
	for (i = 0; i <= 9; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');

	return (0);
}
