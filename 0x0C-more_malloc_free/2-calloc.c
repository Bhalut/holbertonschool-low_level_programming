#include <stdlib.h>

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: size memory
 *@size: size type
 *Return: pointer of direction memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}
