#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String input
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	for (k = 0; k < i / 2; k++)
	{
		c = s[k];
		s[k] = s[j];
		s[j--] = c;
	}
}
