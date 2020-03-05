#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings.
 *@s1: first pointer character
 *@s2: second pointer character
 *@n: size character s2 parameter
 *Return: concat pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len = 0, j = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s2[len])
		len++;

	if (n >= len)
		n = len;

	len = 0;
	while (s1[len])
		len++;

	ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = s1[i];

	for (i = len; i < (len + n); i++)
	{
		ptr[i] = s2[j];
		j++;
	}

	ptr[i] = '\0';
	return (ptr);
}
