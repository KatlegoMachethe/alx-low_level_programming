#include "lists.h"

/**
 * free_listint - free's listint_t
 * @head: pointer to listint_t
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
