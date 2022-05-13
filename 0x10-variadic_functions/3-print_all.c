#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * character - prints char
 * @item: unspecified arguments
 * Return: void
 */

void character(va_list item)
{
	printf("%c", va_arg(item, int));
}

/**
 * integer - prints integer
 * @item: unspecified arguments
 * Return: void
 */

void integer(va_list item)
{
	printf("%i", va_arg(item, int));
}

/**
 * floating - printf a floating point
 * @item: unspecified arguments
 * Return: void
 */

void floating(va_list item)
{
	printf("%f", va_arg(item, double));
}

/**
 * string - prints a string
 * @item: unspecified arguments
 * Return: void
 */

void string(va_list item)
{
	char *s;

	s = va_arg(item, char *);
	if (s == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = ", ";
	va_list item;

	dtype arg_type[] = { {'c', character},
				{'i', integer},
				{'f', floating},
				{'s', string},
				{'\0', NULL}};
	va_start(item, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (arg_type[j].index != '\0')
		{
			if (arg_type[j].index == format[i])
			{
				arg_type[j].func(item);
				printf("%s", separator);
			}
			j++;
		}
		i++;
	}
	va_end(item);
	printf("\n");
}

