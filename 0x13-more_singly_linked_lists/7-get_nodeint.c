#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: pointer to listint_t
 * @index: unsigned int argument
 *
 * Return: listint_t type data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *holdr = head;
	unsigned int count = 0;

	while (holdr && count < index)
	{
		holdr = holdr->next;
		count++;
	}
	return (holdr ? holdr : NULL);
}
