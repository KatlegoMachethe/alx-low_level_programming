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

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
	{
		free(dogo);
		return (NULL);
	}
	dogo->name = malloc(_strlen(name) * sizeof(dogo->name));
	if (dogo->name == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	dogo->name = _strcpy(dogo->name, name);
	dogo->age = age;
	dogo->owner = malloc(_strlen(owner) * sizeof(dogo->owner));
	if (dogo->owner == NULL)
	{
		free(dogo->owner);
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	dogo->owner = _strcpy(dogo->owner, owner);
	return (dogo);
}
