#include "lists.h"

/**
 * add_node - adds a new node to the beggining of a linked list
 * @head: pointer to pointer to list list_t
 * @str: pointer to character
 *
 * Return: Adress to new element od NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
