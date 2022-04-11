#include <stdio.h>

/**
 * main - Program function
 * Description: This program prints all combinations of three digits
 * Numbers must be separated by a , followed by space
 * 012, 120, 102, 021, 201, 210 are the same (one) combination
 * Print only the smallest combination of three digits
 * Numbers must be in ascending order
 * Only use putchar and not more than six times
 * not allowed to use variables of type char
 * all code should be in main function
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				if (num1 < num2 && num2 < num3 && num1 != (num2 != num3))
				{
					putchar('0' + num1);
					putchar('0' + num2);
					putchar('0' + num3);

					if (num1 + num2 + num3 != 7 + 8 + 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
