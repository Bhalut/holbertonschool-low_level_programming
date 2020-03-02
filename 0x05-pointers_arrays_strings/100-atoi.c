/**
 *_strcpy - convert a string to an integer.
 *@s: pointer parameter char
 *Return: integer value
 */
int _atoi(char *s)
{
	int i= 0, aux = 1;
	unsigned int n = 0;
	while (s[i])
	{
		if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
		{
			aux = -1;
			break;
		}
		i++;
	}

	i = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');

			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		i++;
	}

	return (n * aux);
}
