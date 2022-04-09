#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - The umbrella for the program
 * Return: 0 when the code works, otherwise 1
 */
int main(void)
{
	int n, lastnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastnum = n % 10;

	if (lastnum > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastnum);
	} else if (lastnum == 0)
	{
		printf("Last digit of %i is %i and is zero\n", n, lastnum);
	} else if ((lastnum > 5) && (lastnum != 0))
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastnum);
	}
	
	return (0);
}
