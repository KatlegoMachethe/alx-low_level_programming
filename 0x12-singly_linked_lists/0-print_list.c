#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: input pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		index++;
	}
	return (index);
}
