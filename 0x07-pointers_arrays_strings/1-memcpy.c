/**
 *_memcpy - copies memory area.
 *@dest: pointer parameter destination
 *@src: pointer parameter source
 *@n: size
 *Return: dest variable
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest)++ = src[i];

	return (dest);
}
