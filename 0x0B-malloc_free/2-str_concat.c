#include <stdlib.h>

/**
 *str_concat - concatenates two strings.
 *@s1: pointer charecter (string)
 *@s2: pointer charecter (string)
 *Return: pointer value - concatenates string parameters
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len = 0, len1 = 0, i = 0, j = 0, k = 0;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len])
		len++;

	ptr = malloc(sizeof(char) * (len + len1) + 1);
	if (!(ptr == NULL))
	{
		for (i = 0; i < len1; i++)
			ptr[i] = s1[i];

		for (j = i; j <= (len + len1); j++)
		{
			ptr[j] = s2[k];
			k++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
