#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: String input
 * Return: the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char number[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = number[j];
			}
		}
	}
	return (str);
}
