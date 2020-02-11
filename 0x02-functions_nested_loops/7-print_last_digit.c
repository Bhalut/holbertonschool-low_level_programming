#include "holberton.h"

/**
 *print_last_digit - display last digit
 *@n: parameter integer
 *Return: last digit
 */
int print_last_digit(int n)
{
	int result = n;
	if (n < 0)
	{
		n *= -1;
		result = n % 10;
	}

	if (n > 0)
	{
		result = n % 10;
	}

	_putchar(result + '0');

	return (result);
}
