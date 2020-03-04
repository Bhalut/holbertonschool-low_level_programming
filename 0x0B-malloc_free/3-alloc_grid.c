#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width grid
 *@height: height grid
 *Return: double pointer value grid
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j = 0;

	if (!(width <= 0 || height <= 0))
	{
		ptr = malloc(sizeof(int *) * width);
		if (!(ptr == NULL))
		{
			for (i = 0; i < height; i++)
			{
				ptr[i] = malloc(sizeof(int) * width);
				if (!(ptr == NULL))
				{
					for (j = 0; j < width; j++)
						ptr[i][j] = 0;
				}
				else
				{
					for (j = i - 1; j >= 0; j++)
						free(ptr[j]);
					free(ptr);
					return;
				}
			}
			return (ptr);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
