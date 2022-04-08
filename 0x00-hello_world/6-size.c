/*Program for getting size of data types*/

#include <stdio.h>

/**
 * main - Just like any prformer needs a stage, the is the stage for our program to perform
 * Return: 0 for working code, otherwise 1
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of a int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
