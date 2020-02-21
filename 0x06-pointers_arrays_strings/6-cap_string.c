/**
 *cap_string - capitalizes all words of a string.
 *@s: pointer parameter character
 *Return: s variable
 */
char *cap_string(char *s)
{
	int i, j;
	char arr[13] = {',', ';', '.', '!', '?', '"',
		      '(', ')', '{', '}', '\n', '\t', ' '};

	for (i = 0; s[i]; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;

		for (j = 0; arr[j]; j++)
		{
			if (s[i] == arr[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
