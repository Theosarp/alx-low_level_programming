#include "lists.h"

/**
 *  add_dnodeint_end - Adds new node at the end of a dlistint_t list.
 * @head: Double pointer
 * @n: Element to add to the new node
 *
 * Return: Address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		new_element->prev = NULL;
		*head = new_element;
		return (new_element);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = new_element;
	new_element->prev = *head;

	return (new_element);
}
