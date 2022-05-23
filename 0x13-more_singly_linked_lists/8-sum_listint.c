#include "lists.h"

/**
 * sum_listint - sums all the data (n) of listint_t
 * @head: pointer to listint_t
 *
 * Return: sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *holdr = head;

	while (head)
	{
		sum += holdr->n;
		holdr = holdr->next;
	}
	return (sum);
}

