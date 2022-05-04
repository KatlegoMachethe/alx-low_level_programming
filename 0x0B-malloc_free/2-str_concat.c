#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
		l++;
	}
	while (s2[j] != '\0')
	{
		j++;
		K++;
	}
	k++;
	new_str = malloc((l + k) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < k; j++)
	{
		new_str[i] = s2[j];
	}
	return (new_str);
}
