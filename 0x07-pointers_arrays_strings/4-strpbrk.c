/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: pointer parameter
 *@accept: pointer parameter, value accept
 *Return: s variable
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, n = 0, x = 0;

	while (s[n])
		n++;

	while (accept[x])
		x++;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= x; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}
