#include "holberton.h"
#include <stdlib.h>

/**
 *print_last_digit - display last digit
 *@n: parameter integer
 *Return: last digit
 */
int print_last_digit(int n)
{
	int result;

	result = abs(n) % 10;

	_putchar(result + '0');

	return (result);
}
