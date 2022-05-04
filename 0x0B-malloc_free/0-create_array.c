#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of characters
 * @size: Size of the array
 * @c: the specified character
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (0);
	}
	array = malloc(size * sizeof(char));
	if (array == '\0')
	{
		return (0);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
