#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer to listint_t
 * @index: the index to delete node at
 *
 * Return: 1 (Success) or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *holdr = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{
		if (!holdr || !(holdr->next))
		{
			return (-1);
		}
		holdr = holdr->next;
		count++;
	}

	current_node = holdr->next;
	holdr->next = current_node->next;
	free(current_node);

	return (1);
}
