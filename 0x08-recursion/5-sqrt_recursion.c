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
 *
 *
 *
 *
 *
 */
int _sqrt_recursion(int n)
{
	return (cmp(1, n));
}
