#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - sums all of its parameters
 * @n: number of parameters
 *
 * Return: integers (sum of all input variables
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list i;
	unsigned int j, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(i, n);
	for (j = 0; j < n; j++)
	{
		sum += va_arg(i, unsigned int);
	}
	va_end(i);
	return (sum);
}
