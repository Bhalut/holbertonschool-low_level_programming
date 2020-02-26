#include "holberton.h"

/**
 *_put_recursion - prints a string, followed by a new line.
 *@s: pointer parameter char
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		++s;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
