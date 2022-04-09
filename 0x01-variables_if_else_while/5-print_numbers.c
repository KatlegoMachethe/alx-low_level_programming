#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing all single digit numbers
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		printf("%i", num);
	printf("\n");
	return (0);
}
