#include <stdio.h>

/**
 * main - The program container
 * Return: 0 for success, otherwise 1
 */
int main(void)
{
	int num = 0;

	for (;num <= 9; num++)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
