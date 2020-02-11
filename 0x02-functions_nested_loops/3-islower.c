#include "holberton.h"

/**
 *
 *
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
