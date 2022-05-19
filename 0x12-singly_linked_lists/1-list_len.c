#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: input address
 *
 * Return: # of elements
 */

size_t list_len(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		if (h->str == NULL)
			return (0);
		index++;
		h = h->next;
	}
	return (index);
}
