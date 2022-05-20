#include "lists.h"

/**
 * _strlen -gets length of a string
 * @s:input string
 *
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}

/**
 * add_node_end - adds new node at the end of a linked list
 * @head: pointer to pointer to linked list
 * @str: pointer to string
 *
 * Return: address to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *holder;

	if (str == NULL && strdup(str) == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;

	if (head == NULL)
	{
		*head = node;
	}
	else
	{
		holder = *head;
	}

	while (holder->next != NULL)
	{
		holder = holder->next;
		holder->next = node;
	}
	return (node);
}
