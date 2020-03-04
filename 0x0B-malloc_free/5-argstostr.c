#include <stdlib.h>

/**
 *free_grid - frees a 2 dimensional grid previously
 *created by your alloc_grid function.
 *@grid: grid double pointer
 *@height: height grid
 *Return: void
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}

	ptr = malloc(sizeof(char) * (ac + k + 1));
	if (!(ptr == NULL))
	{
		k = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				ptr[k] = av[i][j];
				k++;
			}
			ptr[k] = '\n';
			k++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
