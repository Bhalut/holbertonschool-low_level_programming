/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *@x: pointer parameter integer
 *@y: pointer parameter integer
 *Return: pow number
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (_pow_recursion(x, y - 1) * x);
	else if (y == 0)
		return (1);
	else
		return (-1);
}
