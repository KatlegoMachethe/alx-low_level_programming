#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print alphabets from a to z
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
