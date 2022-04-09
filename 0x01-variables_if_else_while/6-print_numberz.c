#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function for program
 * Description: Printing all single digit numbers 0-10
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		putchar(48 + num);

	putchar('\n');
	return (0);
}
