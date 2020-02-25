/**
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, n = 0;

	while (needle[n])
		n++;

	for (i = 0; i <= n; i++)
	{
		if (needle[j] == '\0')
			return (haystack + (i - j));

		if (haystack[i] == needle[j])
		{
			j++;
			continue;
		}
		else
			j = 0;

	}
	haystack = '\0';
	return (haystack);
}
