/**
 *cmp - comparation multiplication
 *@x: value to compare
 *@y: value compare
 *Return: result
 */
int cmp(int x, int y)
{
	if ((x * x) == y)
		return (x);
	else if ((x * x) < 0)
		return (-1);
	else
		return (cmp(x + 1, y));
}

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number for square root
 *Return: result
 */
int _sqrt_recursion(int n)
{
	return (cmp(1, n));
}
