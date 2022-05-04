#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all aruements in reverse
 * @argc: number of arguments in the program
 * @argv: arguments in the program
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int index;

	for (index = 0; index != argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
