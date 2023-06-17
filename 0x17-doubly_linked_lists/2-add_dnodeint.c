#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *h;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	i->next = h;

	if (h != NULL)
		h->prev = i;

	*head = i;

	return (i);
}
