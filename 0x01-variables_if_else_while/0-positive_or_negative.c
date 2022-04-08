#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - The umbrella for the program
 * Return: 0 when the code works, otherwise 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	} else if (n < 0)
	{
		printf("%i is negative\n", n);
	} else
	{
		printf("%i is zero\n", n);
	}

	return (0);
}
