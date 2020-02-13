#include <stdio.h>

/**
 *main - print from 1 to 100, not multiple 3 and 5
 *Return: 0 success
 */
int main(void)
{
	int i, t, f;

	for (i = 1; i <= 100; i++)
	{
		t = i % 3;
		f = i % 5;

		if (t == 0 && f == 0)
			printf("FizzBuzz");
		else if (f == 0)
			printf("Buzz");
		else if (t == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i != 100)
			putchar(' ');
	}
	printf("\n");
	return (0);
}
