/**
 *cmp - comparation value
 *@x: number to compare
 *@y: value compare
 *Return: result
 */
int cmp(int x, int y)
{
	if (x % y == 0)
		return (1);
	else if (x % y > 0)
		return (0);
	else
		return (cmp(x, y + 1));
}

/**
 *is_prime_number - returns 1 if the input integer is a prime number.
 *@n: input integer
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (cmp(n, 1));
}
