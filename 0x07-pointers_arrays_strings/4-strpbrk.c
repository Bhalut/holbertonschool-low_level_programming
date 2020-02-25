/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: pointer parameter
 *@accept: pointer parameter, value accept
 *Return: s variable
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, n = 0;

	while (s[n])
		n++;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				i = n;
				break;
			}
			else if (s[i] == '\0')
				s = '\0';
		}
	}

	return (s);
}
