#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds positive numbers.
 *@argc: size parameters
 *@argv: array pointer parameters
 *Return: 0 success or 1 error
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				add += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", add);
	}

	return (0);
}
