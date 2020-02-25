/**
 *_strspn - gets the length of a prefix substring.
 *@s: pointer parameter
 *@accept: pointer parameter, value accept
 *Return: counter
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0, x = 0;
	unsigned int count = 0;

	while (s[x])
		x++;

	while (accept[n])
		n++;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			if (!accept[j])
				i = x;
		}
	}

	return (count);
}
