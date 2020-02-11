#include "holberton.h"

/**
 *print_last_digit - display last digit
 *@n: parameter integer
 *Return: last digit
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (n < 0)
	{
		result *= -1;
	}

	_putchar(result + '0');

	return (result);
}
