#include <stdio.h>

/**
 * main - The main function
 * Description: Prints all number of base 16
 * Return: 0 for correct program, othewise 0
 */
int main(void)
{
	int count;
	char alphabet;

	for (count = 0; count <= 10; count++)
		putchar(count);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
