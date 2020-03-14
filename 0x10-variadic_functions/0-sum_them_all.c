#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: size
 *Return: adding
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i = 0;

	if (!n)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
