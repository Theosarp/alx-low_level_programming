#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
