#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 *func_char - print type char.
 *@valist: is a arg type char.
 *Return: void
 */
void func_char(va_list valist)
{
	printf("%c", (char)va_arg(valist, int));
}

/**
 *func_int - print type int.
 *@valist: is a arg type int.
 *Return: void
 */
void func_int(va_list valist)
{
	printf("%i", va_arg(valist, int));
}

/**
 *func_float - print type float.
 *@valist: is a arg type float.
 *Return: void
 */
void func_float(va_list valist)
{
	printf("%f", (float)va_arg(valist, double));
}

/**
 *func_string - print type string.
 *@valist: is a arg type string
 *Return: void
 */
void func_string(va_list valist)
{
	char *ptr = va_arg(valist, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", ptr);
}


/**
 *print_all - prints anything
 *@format: is a list of types of arguments passed to the function
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j = 0;
	char *sp = "";
	formate formates[] = {
		{"c", func_char},
		{"i", func_int},
		{"f", func_float},
		{"s", func_string},
		{NULL, NULL}};

	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;
		while (formates[j].index)
		{
			if (*formates[j].index == format[i])
			{
				printf("%s", sp);
				formates[j].func(valist);
				sp = ", ";

			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(valist);
}
