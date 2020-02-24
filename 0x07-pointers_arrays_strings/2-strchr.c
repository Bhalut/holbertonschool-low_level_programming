/**
 *_strchar - locates a character in a string.
 *@s: pointer parameter char
 *@c: parameter character
 *Return: s variable
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			s = &s[i];
		else
			s = NULL;
	}

	return (s);
}
