#include <stdlib.h>

/**
 *_strdup - concatenates two strings.
 *@s1: pointer charecter (string)
 *@s2: pointer charecter (string)
 *Return: pointer value - concatenates string parameters
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len = 0, len1 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len])
		len++;

	if (len + len1)
	{
		ptr = malloc(sizeof(char) * (len + len1));
		if (!(ptr == NULL))
		{
			for (i = 0; i < len1; i++)
				ptr[i] = s1[i];

			for (j = 0; j <= (len + len1); j++)
				ptr[j + i] = s2[j];

			return (ptr);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
