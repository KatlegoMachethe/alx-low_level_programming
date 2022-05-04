#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: pointer to an input string
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int count = 0;
	unsigned int index;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count])
	{
		count++;
	}
	count++;
	string = malloc(count * sizeof(char));
	if (string == NULL)
	{
		return (NULL);
	}
	for (index = 0; index <= count; index++)
	{
		string[index] = str[index];
	}
	return (string);
}
