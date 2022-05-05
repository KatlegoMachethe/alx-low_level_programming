#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @s: input string
 * Return: int (lenth of the string)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * argstostr - concatenates all arguments of a program
 * @ac: integer input
 * @av: vector
 * Return: pointer to new string, NULL if ac == 0, av == NULL of fail
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len += (ac + 1);
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k++] = av[i][j];
	}
	return (new_str);
}
