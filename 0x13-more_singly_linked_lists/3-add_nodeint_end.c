#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t
 * @head: poiner to pointer of listint_t
 * @n: integer (# of elements in listint_t)
 *
 * Return: address to new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *holder = *head;

	end_node = malloc(sizeof(listint_t));
	if (!end_node)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (holder->next)
	{
		holder = holder->next;
	}
	holder->next = end_node;
	return (end_node);
}
