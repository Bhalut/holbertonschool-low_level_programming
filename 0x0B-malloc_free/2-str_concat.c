#include <stdlib.h>

/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: pointer charecter (string)
 *Return: pointer value - duplicate str parameter
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len = 0, len1, i = 0, j = 0;

	while (s1[len1])
		len1++;

	while (s2[len])
		len++;

	len += len1;

	if (len)
	{
		ptr = malloc(sizeof(*ptr) * len);
		if (!(ptr == NULL))
		{
			for (i = 0; i < len1; i++)
				ptr[i] = s1[i];

			for (j = 0; j < len; j++)
				ptr[j + i] = s2[j];

			return (ptr);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
