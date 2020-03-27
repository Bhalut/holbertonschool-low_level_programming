#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number in decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	while (n)
	{
		_putchar((n & 1) + '0');
		n >>= 1;
	}
}
