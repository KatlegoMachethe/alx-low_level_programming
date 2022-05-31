#include "main.h"

/**
 * _strlen - gets the length of a string
 * @str: string to get length of
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: string/text to add to the end to the file
 *
 * Return: integer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, writing;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		writing = write(file, text_content, _strlen(text_content));
		if (writing == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
