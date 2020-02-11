#include "holberton.h"

/**
 *print_sign - display + positive, - negative, 0 zero
 *@c: parameter character or code ascii
 *Return: + - or 0
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('-');
		result = 1;
	}

	return (result);
}
