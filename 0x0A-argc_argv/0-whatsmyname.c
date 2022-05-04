#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguement
 * @argv: 1Dimensional array of strings
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
