#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of llistint_t list
 * @head: pointer to pointer of listint_t
 * @n: integer
 *
 * Return: address to new element of NULLif it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
