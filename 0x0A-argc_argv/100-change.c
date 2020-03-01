#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins
 *to make change for an amount of money.
 *@argc: size parameters
 *@argv: array pointer parameters
 *Return: 0 success or 1 error
 */
int main(int argc, char *argv[])
{
	int n = 0, count = 0;

	if (argc == 2)
	{
		n = atoi(argv[argc - 1]);

		while (n)
		{
			if (n >= 25)
			{
				n -= 25;
				count++;
			} else if (n >= 10)
			{
				n -= 10;
				count++;
			} else if (n >= 5)
			{
				n -= 5;
				count++;
			} else if (n >= 2)
			{
				n -= 2;
				count++;
			} else if (n == 1)
			{
				n -= 1;
				count++;
			} else
				break;
		}
		printf("%d\n", count);
	} else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
