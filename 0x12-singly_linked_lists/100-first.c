#include "lists.h"

/**
 * first - prints a sentence before a main function is executed
 *
 * Return: nothing
 */

void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
