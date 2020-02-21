/**
 *rot13 - encodes a string using rot13.
 *@s: pointer parameter charater
 *Return: s variable
 */
char *rot13(char *s)
{
	int i, j;
	char arr_char[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			   'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			   'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
			   'e', 'f', 'g', 'h', 'i','j', 'k', 'l', 'm', 'n', 'o',
			   'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
			   'x', 'y', 'z'};
	char arr_rot[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			  'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			  'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't',
			  'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
			  'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (i = 0; s[i]; i++)
	{
		for(j = 0; arr_char[j]; j++)
		{
			if (s[i] == arr_char[j])
				s[i] = arr_rot[j];
		}
	}

	return (s);
}
