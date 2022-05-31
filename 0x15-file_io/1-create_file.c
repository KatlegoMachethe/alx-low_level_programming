#include "main.h"

/**
 * _strlen - gets the size of a string
 * @string: the string to get length of
 *
 * Return: length of string
 */

int _strlen(char *string)
{
	int len = 0;

	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * create_file - creates a file
 * @filename: the name of the created file
 * @text_content: the text written in the file
 *
 * Return: 1 on success, -1 on failue
 * (file cannot be reated or written)
 */

int create_file(const char *filename, char *text_content)
{
	int file,  writing;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT, 0600);
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
