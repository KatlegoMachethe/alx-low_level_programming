#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: pointer to pointer of listint_t
 *
 * Return: data that was in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *holdr;
	int count;

	if (!head || !*head)
	{
		return (0);
	}
	count = (*head)->n;
	holdr = (*head)->next;
	freee(*head);
	*head = holdr;

	return (count);
}
