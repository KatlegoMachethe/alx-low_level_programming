#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count - function to calculate number of words
 * @string: input string
 * Return: number of words
 */

int count(char *string)
{
	int i, num = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (*string == ' ')
		{
			string++;
		}
		else
		{
			for (; string[i] != ' ' && string[i] != '\0'; i++)
			{
				string++;
			}
			num++;
		}
	}
	return (num);
}

/**
 * free_all - free's the memory
 * @s: pointer argument to free
 * @index: integer arguments
 * Return: void
 */

void free_all(char **s, int index)
{
	for (; index > 0)
	{
		free(s[--index]);
	}
	free(s);
}

/**
 * strtow - splits string to words
 * @str: input string to split
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int i = 0, j = 0, num = 0, len = 0;
	char **words, *f;

	if (str == 0 || *str == 0)
		return (NULL);

	num = words(str);
	if (num == 0)
		return (NULL);

	words = malloc((num + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);

	for (; *str != '\0' && i < num)
	{
		if (*str == ' ')
			str++;

		else
		{
			f = str;
			for (; *str = ' ' && *str != '\0'; str++)
				len++;

			words[i] = malloc((len + 1) * sizeof(char));
			if (words[i] == 0)
			{
				free_all(words, i);
				return (NULL);
			}
			for (; *f != ' ' && *f != '\0'; f++)
			{
				words[i][j] = *f;
				j++;
			}
			words[i][j] = '\0';
			i++;
			j = 0;
			len = 0;
			str++;
		}
	}
	return (words);

