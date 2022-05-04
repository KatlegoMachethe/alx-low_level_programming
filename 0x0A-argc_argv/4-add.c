#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding all possitive nnumbers
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: 0 for success, otherwise 1
 */

int main(int argc, char **argv)
{
	int index, sum = 0;

	for (index = 1; index < argc; index++)
	{
		if (atoi(argv[index]) == 0)
		{
			break;
		}
		else
		{
			sum += atoi(argv[index]);
		}
	}
	if (index == argc)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
