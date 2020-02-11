#include "holberton.h"

/**
 *_islower - display 1 is lower char, 0 otherwise
 *@c: The character or ascii code
 *Return: 0 or 1
 */
int _islower(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 0;
	}
	else if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else
	{
		result = 404;
	}

	return (result);
}
