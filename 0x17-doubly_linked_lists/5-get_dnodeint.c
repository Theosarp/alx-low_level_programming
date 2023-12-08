#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node
 *
 * Return: nth node or if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int x;

	current = head;
	x = 0;
	while (current != NULL)
	{
		if (x == index)
			return (current);
		current = current->next;
		x++;
	}
	return (NULL);
}
