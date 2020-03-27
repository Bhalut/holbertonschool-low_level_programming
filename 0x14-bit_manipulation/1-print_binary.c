#include "holberton.h"

/**
 * rev_bin - prints the binary
 * @n: number in decimal
 * Return: void
 */
void rev_bin(unsigned long int n)
{
	if (!n)
		return;

	rev_bin(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number in decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	else
		rev_bin(n);
}
