/**
 *rot13 - encodes a string using rot13.
 *@s: pointer parameter charater
 *Return: s variable
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char *arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *arr_rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; arr[j]; j++)
		{
			if (s[i] == arr[j])
			{
				s[i] = arr_rot[j];
				break;
			}
		}
	}

	return (s);
}
