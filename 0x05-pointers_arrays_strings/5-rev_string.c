#include "holberton.h"

/**
 *rev_string - display revert string data
 *@s: pointer char
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0, k = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j > k; j--)
	{
		c = s[k];
		s[k] = s[j];
		s[j] = c;
		k++;
	}
}
