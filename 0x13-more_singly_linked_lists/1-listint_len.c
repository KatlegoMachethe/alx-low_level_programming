#include "lists.h"

/**
 * listint_len - returns the number of elements in the listint list
 * @h: pointer to listint_t list
 *
 * Return: # of elements in listint
 */

size_t listint_len(const listint_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		index++;
		h = h->next;
	}
	return (index);
}
