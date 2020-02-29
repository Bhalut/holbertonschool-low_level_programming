#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers.
 *@argc: size parameters
 *@argv: array pointer parameters
 *Return: 0 success or 1 error
 */
int main(int argc, char *argv[])
{
	int i, j, add;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				j = atoi(argv[i]);
				add += j;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
