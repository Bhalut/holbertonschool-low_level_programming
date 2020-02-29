#include <stdio.h>

/**
 *main - prints all arguments it receives.
 *@argc: size parameters
 *@argv: array pointer parameters
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}
