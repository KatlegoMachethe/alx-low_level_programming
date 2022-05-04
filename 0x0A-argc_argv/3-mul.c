#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: number of command line arguements
 * @argv: array containing the commands
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
