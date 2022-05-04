#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of arguement
 * @argv: 1Dimensional array of strings
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
