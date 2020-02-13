#include <stdio.h>

/**
 *main - print from 0 to 100, not multiple 3 and 5
 *Return: 0 success
 */
int main(void)
{
	int i, t, f;

	for (i = 0; i <= 100; i++)
	{
		for (t = 1; t <= 33; t++)
		{
			if (i == (3 * t) && i == (5 * t))
			{
				f = 1;
				break;
			}
			else if (i == (5 * t))
			{
				f = 2;
				break;
			}
			else if (i == (3 * t))
			{
				f = 3;
				break;
			}
			else
			{
				f = 4;
				continue;
			}
		}

		if (f == 1)
			printf("FizzBuzz ");
		else if (f == 2)
			printf("Buzz ");
		else if (f == 3)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
