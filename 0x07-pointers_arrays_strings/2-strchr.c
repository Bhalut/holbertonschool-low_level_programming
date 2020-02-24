/**
 *_strchr - locates a character in a string.
 *@s: pointer parameter char
 *@c: parameter character
 *Return: s variable
 */
char *_strchr(char *s, char c)
{
	int i, n;

	n = sizeof(*s) / sizeof(s[0]);

	for (i = 0; i <= n; i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			break;
		}

		if (s[i] == '\0')
			s = '\0';
	}

	return (s);
}
