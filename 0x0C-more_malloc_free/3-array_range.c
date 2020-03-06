#include <stdlib.h>

/**
 *array_range - creates an array of integers.
 *@min: minimun range
 *@max: maximun range
 *Return: pointer integers
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
