/**
 *_strcmp - compares two strings
 *@s1: pointer parameter
 *@s2: pointer parameter
 *Return: n variable
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, n = 0, j = 0;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (i == j)
	{
		n = 0;
	}
	else if (i < j)
	{
		n = i - j;
		n = (n * 10) - i;
	}
	else
	{
		n = i - j;
		n = (n * 10) + j;
	}

	return (n);
}
