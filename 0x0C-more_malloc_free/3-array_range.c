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
	int i, ran = 0;

	if (min > max)
		return (NULL);

	ran = (max - min) + 1;
	ptr = malloc(sizeof(int) * ran);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ran; i++)
		ptr[i] = min + i;

	return (ptr);
}
