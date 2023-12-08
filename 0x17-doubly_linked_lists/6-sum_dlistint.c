#include "lists.h"

/**
 *  sum_dlistint - Returns sum of all
 * the data in dlistint_t linked list.
 * @head: double pointer
 *
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *x;

	for (x = head; x != NULL; x = x->next)
	{
		sum += x->n;
	}

	return (sum);
}
