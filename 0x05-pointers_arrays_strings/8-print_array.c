#include <stdio.h>

/**
 *print_array - Write a function that prints n elements of an array of integers
 *@a: pointer integer
 *@n: parameter integer
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	putchar('\n');
}
