#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number in decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int size = sizeof(unsigned long int);
	unsigned long int max = 1 << (size * 7);
	int isNumber = 0;

	if (n == 0)
		_putchar('0');

	while (max)
	{
		if (!!(n & max))
			isNumber = 1;

		if (isNumber)
			_putchar(!!(n & max) + '0');

		max >>= 1;
	}
}
