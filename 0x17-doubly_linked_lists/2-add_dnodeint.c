#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list.
 * @head: double pointer
 * @n:new data to add
 *
 * Return: address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = *head;
	new_element->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_element;
	*head = new_element;
	return (new_element);
}
