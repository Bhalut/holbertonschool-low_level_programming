/**
 *_strncat - concatenates two strings
 *@dest: pointer parameter destination
 *@src: pointer parameter source
 *@n: parameter integer number
 *Return: destination variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, x = 0, k = 0, y = 0;

	while (dest[i])
		i++;

	while (src[y])
		y++;

	if (n < y)
	{
		n += i;

		for (j = i; j < n; j++)
		{
			dest[j] = src[x];
			x++;
		}
	}
	else
	{
		n = i + y;

		for (k = i; k < n; k++)
		{
			dest[k] = src[x];
			x++;
		}
	}

	return (dest);
}
