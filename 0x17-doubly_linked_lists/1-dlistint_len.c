#include "lists.h"

/**
 * dlistint_len - returns  number of elements in a linked dlistint_t list.
 * @h: pointer to the head
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
