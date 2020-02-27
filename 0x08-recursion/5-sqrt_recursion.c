/**
 *
 *
 *
 *
 *
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (_sqrt_recursion(n / 2) * n);
	else if (n == 0)
		return (1);
	else
		return (-1);
}
