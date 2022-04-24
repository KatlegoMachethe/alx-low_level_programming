#include "main.h"

/**
 * cap_string - Capitalizes every word in the string
 * @str: String input
 * Return: CHaracter str
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		switch (str[i])
		{
			case ' ':
			case '\n':
			case '\t':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
				break;
			default:
				i++;
		}
	}
	return (str);
}
