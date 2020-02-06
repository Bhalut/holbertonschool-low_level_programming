#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - display the last digit of the number stored in the variable n.
 *Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	lastDigit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("ERROR!, invalid number");
	}

	return (0);
}
