#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer entry
 *@old_size: size ptr
 *@new_size: ne size to allocate
 *Return: new pointer allocate
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *other;
	unsigned i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	other = ptr;
	if (new_size > old_size || ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			p[i] = other[i];
	}
	free(ptr);

	return (p);
}
