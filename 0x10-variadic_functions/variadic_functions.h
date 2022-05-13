#ifndef VF_H
#define VF_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct datatype - structure
 * @index: character indicating the data type
 * @func: pointer to funtion
 */

typedef struct datatype
{
	char index;
	void (*func)(va_list);
} dtype;

/*Declaring functions to be used in 3-print_all.c*/

void character(va_list);
void integer(va_list);
void floating(va_list);
void string(va_list);

#endif
