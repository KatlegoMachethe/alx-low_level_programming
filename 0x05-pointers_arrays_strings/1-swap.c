#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer argument
 * @b: Second integer argument
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int address;

	address = *a;
	*a = *b;
	*b = address;
}
