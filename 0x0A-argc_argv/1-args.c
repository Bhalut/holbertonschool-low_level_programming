#include <stdio.h>

/**
 *main - prints the number of arguments passed into it.
 *@argc: size parameters
 *@argv: array pointer parameters
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 0)
	{
		while (argv[i])
			i++;

		printf("%d\n", i - 1);
	}
	return (0);
}
