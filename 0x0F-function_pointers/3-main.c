#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - performs simple operations.
 *@argc: counter parameters
 *@argv: pointer to array parameters
 *Return: if success 0
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = &argv[2][0];

	if (get_op_func(operator) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);
	return (0);
}
