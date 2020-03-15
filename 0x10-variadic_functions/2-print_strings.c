#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints strings, followed by a new line.
 *@separator: string to separator
 *@n: size
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *ptr;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(valist, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (i < (n - 1) &&  separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
