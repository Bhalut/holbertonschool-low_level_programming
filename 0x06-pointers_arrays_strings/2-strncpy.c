/**
 *_strncpy - copies a string.
 *@dest: pointer parameter destination
 *@src: pointer parameter source
 *@n: integer parameter number
 *Return: dest variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, k = 0;

	while (src[k])
		k++;

	if (n < k)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < k)
				dest[i] = src[i];
			else
				dest[i] = '\0';
		}
	}

	return (dest);
}
