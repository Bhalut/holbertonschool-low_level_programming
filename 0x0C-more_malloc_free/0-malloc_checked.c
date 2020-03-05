#include <stdlib.h>

/**
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (!(ptr == NULL))
		return (ptr);
	else
		exit (98);
}
