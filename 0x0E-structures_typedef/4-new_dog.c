#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - gets the length of a string
 * @str: the input string
 * Return: lenght of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - copies a string
 * @dest: where the string is copied to
 * @src: the string we are copying
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; index <= _strlen(src); index++)
	{
		dest[index] = src[index];
	}
	dest[index + 1] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: name of the owner
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;
	char *name_cpy, owner_cpy;

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
	{
		return (NULL);
	}
	dogo->name = name;
	if (name != NULL)
	{
		name_cpy = malloc(_strlen(name) + 1);
		if (name_cpy == NULL)
		{
			free(dogo);
			return (NULL);
		}
		dogo->name = _strcpy(name_cpy, name);
	}
	else
	{
		dogo->name = NULL;
	}
	if (owner != NULL)
	{
		owner_cpy = malloc(_strlen(owner) + 1);
		if (owner_cpy == NULL)
		{
			free(name_cpy);
			free(dogo);
			return (NULL);
		}
		dogo->owner = _strcpy(owner_cpy, owner);
	}
	else
	{
		dogo->owner = owner;
	}
	return (dogo);
}
