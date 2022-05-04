#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments
 * @argc: number of arguement
 * @argv: 1D array of strings
 * Return: int (argc)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
