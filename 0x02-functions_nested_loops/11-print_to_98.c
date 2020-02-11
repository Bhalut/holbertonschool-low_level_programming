#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - display from n to 98
 *@n: parameter integer
 *Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
