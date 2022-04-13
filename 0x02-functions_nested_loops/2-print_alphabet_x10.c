#include "main.h"

/**
 * print_alphabet_x10 - Prints all alphabets and repeats x10
 * Return: Absolutely nothing
 */
void print_alphabet_x10(void)
{
	int iter = 0;
	char alphabet;

	while (iter < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		iter++;
	}
	_putchar('\n');
}
