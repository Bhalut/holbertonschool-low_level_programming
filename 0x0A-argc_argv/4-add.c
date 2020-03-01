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
	int i;
	unsigned int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}

	return (0);
}
