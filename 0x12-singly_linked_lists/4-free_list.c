#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to a linked list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *loc;

	while ((loc = head) != NULL)
	{
		loc = head->next;
		free(head->str);
		free(head);
	}
}
