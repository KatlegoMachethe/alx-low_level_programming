#include "lists.h"

/**
 * free_listint2 - frees listint_t
 * @head: pointer to pointer to listint_t
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head == NULL)
	{
		return (NULL);
	}
	while (*head)
	{
		holder = (*head)->next;
		free(*head);
		*head = holder;
	}
	*head = NULL;
}
