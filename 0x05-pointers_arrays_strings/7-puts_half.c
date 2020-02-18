#include "holberton.h"

/**
 *puts_half - Write a function that prints half of a string
 *@str: pointer char
 *Return: void
 */
void puts_half(char *str)
{
	int i = 0, j, tmp;

	while (str[i])
		i++;

	if (i % 2 == 0)
	{
		tmp = i / 2;
		for (j = tmp; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		tmp = (i + 1) / 2;
		for (j = tmp; j < i; j++)
		{
			_putchar(str[j]);
		}
	}

	_putchar('\n');
}
