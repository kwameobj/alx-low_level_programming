#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h);
{
	size_t i;

	i = 0;

	if (h == NULL)
		return (size);

	while (h)
	{
		printf("%d/n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
