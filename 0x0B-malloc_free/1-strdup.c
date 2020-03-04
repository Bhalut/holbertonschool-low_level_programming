#include <stdlib.h>

/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: pointer charecter (string)
 *Return: pointer value - duplicate str parameter
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i = 0;

	while (str[len])
		len++;

	if (!(*str == NULL))
	{
		ptr = malloc(sizeof(*ptr) * len);
		if (!(ptr == NULL))
		{
			for (i = 0; i < len; i++)
				ptr[i] = str[i];

			return (ptr);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
