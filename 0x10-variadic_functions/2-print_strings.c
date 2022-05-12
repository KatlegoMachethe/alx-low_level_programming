#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - prints strins
 * @separator: string to be printed between strings
 * @n: number of string function arguments
 *
 * Return: void
 */

void print_strings(const char *separator, unsigned int n, ...)
{
	va_list i;
	unsigned int j;
	char *arg;

	va_start(i, n);
	for (j = 0; j < n; j++)
	{
		arg = va_arg(i, char *);
		if (arg != NULL)
		{
			printf("%s", arg);
		}
		else
		{
			printf("%p", arg);
		}
		if (j != n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(i);
}
