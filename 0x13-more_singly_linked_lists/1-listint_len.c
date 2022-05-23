#include "lists.h"

/**
 * listint_len - returns the number of elements in the listint list
 * @h: pointer to listint_t list
 *
 * Return: # of elements in listint
 */

size_t listint_len(const listint *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
