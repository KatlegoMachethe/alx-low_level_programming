#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: pointer to pointer to listint_t
 * @idx: position to insert node
 * @n: integer input
 *
 * Return: listint_t data type
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *holdr = *head;
	unsigned int count;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (count = 0; holdr && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = holdr->next;
			holdr->next = new_node;
			return (new_node);
		}
		else
			holdr = holdr->next;
	}
	return (NULL);
}
