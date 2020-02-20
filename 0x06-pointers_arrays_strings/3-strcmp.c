/**
 *_strcmp - compares two strings
 *@s1: pointer parameter
 *@s2: pointer parameter
 *Return: n variable
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, n = 0;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (!(s1[i] == s2[i]))
		{
			n = s1[i] - s2[i];
			break;
		}
	}

	return (n);
}
