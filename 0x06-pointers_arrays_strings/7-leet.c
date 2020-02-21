/**
 *leet - encodes a string into 1337.
 *@s: pointer parameter character
 *Return: s variable
 */
char *leet(char *s)
{
	int i, j;
	int arr_int[] = {4, 3, 0, 7, 1};
	char arr_char_low[] = {'a', 'e', 'o', 't', 'l'};
	char arr_char_up[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; arr_char_low[j]; j++)
		{
			if (s[i] == arr_char_low[j] || s[i] == arr_char_up[j])
				s[i] = arr_int[j] + '0';
		}
	}

	return (s);
}
