#include "lists.h"

/**
 * _strlen -gets length of a string
 * @s:input string
 *
 * Return: length of the string
 */

size_t _strlen(const char *s)
{
	size_t length;

	for (length = 0; s[length]; length++)
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

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
	holder = *head;

	if (holder == NULL)
	{
		*head = node;
	}
	else
	{
		while (holder->next != NULL)
			holder = holder->next;
		holder->next = node;
	}
	return (*head);
}
