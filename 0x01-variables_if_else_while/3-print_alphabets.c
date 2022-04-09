#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print alphabets from a to z
 * Return: 0
 */
int main(void)
{
	char alphabet, upper_alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (upper_alphabet = 'A'; upper_alphabet <= 'Z'; upper_alphabet++)
		putchar(upper_alphabet);
	putchar('\n');
	return (0);
}
