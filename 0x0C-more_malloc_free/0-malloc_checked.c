#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: size in bytes
 *Return: void pointer or 98 exit process
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
