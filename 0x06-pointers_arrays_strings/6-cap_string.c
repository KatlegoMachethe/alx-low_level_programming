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
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
					/*32 is difference between upper and lower case in ascii*/
				}
				break;
			default:
				str[i] = str[i];
		}
		i++;
	}
	return (str);
}
