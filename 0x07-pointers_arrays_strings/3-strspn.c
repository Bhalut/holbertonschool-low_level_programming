/**
 *_strspn - gets the length of a prefix substring.
 *@s: pointer parameter
 *@accept: pointer parameter, value accept
 *Return: counter
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, x = 0;
	unsigned int count = 0;

	while (accept[x])
		x++;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; i <= x; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			if (accept[j] == '\0')
				i = n;
		}
	}

	return (count);
}
