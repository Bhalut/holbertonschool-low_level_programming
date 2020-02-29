#include <stdio.h>

/**
 *main - prints its name
 *@argc: size parameters
 *@argv: array pointer parameters
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}
